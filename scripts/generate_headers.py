import os

current_directory = os.path.realpath(os.path.dirname(__file__))

def main():

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
                if "interface" in l:
                    read_lines = True
                if "implementation" in l:
                    read_lines = False
                if read_lines is True and "cdecl" in l:
                    l = l.replace("Function", "function").replace("procedure", "function").replace("Procedure", "function").replace("  ", " ")
                    l = l.split("//")[0].strip()
                    func_sigs.append(l)

    func_sigs = sorted(func_sigs)
    with open(os.path.abspath(os.path.join(current_directory, "./../opendssdirect.pas")), "w") as f:
        f.write("\n".join(func_sigs))


if __name__ == "__main__":
    main()
