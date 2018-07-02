import os
import json
import click

current_directory = os.path.realpath(os.path.dirname(__file__))


@click.group()
@click.version_option("0.1.0", '--version')
def cli():
    pass


@cli.command()
def generate_headers():

    path_to_folder = os.path.abspath(os.path.join(current_directory, "./../../OpenDSSDirect.make/_source/electricdss/DDLL/"))

    files = []
    for file in os.listdir(path_to_folder):
        if file.endswith(".pas"):
            files.append(file)

    func_sigs = []
    for filename in files:
        with open(os.path.join(path_to_folder, filename)) as f:
            read_lines = False
            data = f.read()
            for l in data.splitlines():
                if l.strip().lower().startswith("interface"):
                    read_lines = True
                if l.strip().lower().startswith("implementation"):
                    read_lines = False
                if read_lines is True and "cdecl" in l:
                    l = l.replace("Function", "function").replace("procedure", "function").replace("Procedure", "function").replace("  ", " ")
                    l = l.split("//")[0].strip()
                    func_sigs.append(l)

    func_sigs = sorted(func_sigs)
    with open(os.path.abspath(os.path.join(current_directory, "./../opendssdirect.pas")), "w") as f:
        f.write("\n".join(func_sigs))


@cli.command()
def parse_headers():

    with open(os.path.join(current_directory, "../opendssdirect.pas")) as f:
        data = f.read()

    opendss_functions = []
    for l in data.splitlines():

        # get function name
        function_name = l.split("(")[0].strip("function ").replace("cdecl", "").replace(";", "").strip()

        # get output type
        if "(" not in l and ")" not in l:
            output_type = "void"
        else:
            output_type = l.split(")")[-1]
            if output_type.startswith(":"):
                output_type = output_type.split(";")[0].split(":")[-1].strip()
            else:
                output_type = "void"

        # get input arguments
        if "(" not in l and ")" not in l or l.split("(")[1].split(")")[0].strip() == "":
            input_arguments = {"number": 0, "type": []}
        else:
            arguments = []
            input_arguments = l.split("(")[1].split(")")[0]
            for arg in input_arguments.split(";"):
                # only a single argument
                arg_names, arg_type = arg.split(":")
                for arg_name in arg_names.split(","):
                    d = {"name": arg_name.strip().replace("var ", "").replace("Var ", "").replace("out ", "").strip(), "type": arg_type.strip()}
                    arguments.append(d)

        function_definition = {
            "name": function_name,
            "output": {"type": output_type},
            "input": arguments
        }

        opendss_functions.append(function_definition)

    with open(os.path.join(current_directory, "../opendssdirect.json"), "w") as f:
        f.write(json.dumps(opendss_functions, indent=4, separators={",": "", ":": ""}))


@cli.command()
def generate_c_headers():

    typedefs = {"DOUBLE": "double",
     "INTEGER": "int",
     "LONGINT": "int32_t",
     "LONGWORD": "uint32_t",
     "NATIVEUINT": "uint64_t",
     "PANSICHAR": "char *",
     "PCOMPLEXARRAY": "void *",
     "PINTEGERARRAY": "void *",
     "PNODEVARRAY": "void *",
     "VARIANT": "void *",
     "VOID": "void"}

    with open(os.path.join(current_directory, "../opendssdirect.json")) as f:
        data = json.loads(f.read())

    c_headers = []
    for f in data:

        c_header = ""
        c_header = c_header + f["output"]["type"].upper()
        c_header = c_header + " " + f["name"] + "("
        for i, arg in enumerate(f["input"]):
            c_header = c_header + arg["type"].upper() + " " + arg["name"].lower()
            if i < len(f["input"]) - 1:
                c_header = c_header + ", "
        c_header = c_header + ");"

        c_headers.append(c_header)

    with open(os.path.join(current_directory, "../opendssdirect.h"), "w") as f:

        f.write("""#include "stdint.h"\n""")
        f.write("\n")
        for k, v in typedefs.items():
            f.write("typedef {} {};\n".format(v, k))

        f.write("\n")
        f.write("\n".join(c_headers))


if __name__ == "__main__":

    cli()
