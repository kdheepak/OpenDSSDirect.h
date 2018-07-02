import os

def main():

    pass
    path_to_folder = os.path.abspath(os.path.join("./../../OpenDSSDirect.make/_source/electricdss/DDLL/"))

    files = []
    for file in os.listdir(path_to_folder):
        if file.endswith(".pas"):
            files.append(file)

    func_sigs = []
    for filename in files:
        with open(os.path.join(path_to_folder, filename)) as f:
            data = f.read()
            for l in data.splitlines():
                if "cdecl" in l:
                    func_sigs.append(l)

    os.path.abspath("./../")

    with open("./../opendssdirect.pas", "w") as f:
        f.write("\n".join(func_sigs))

if __name__ == "__main__":

    main()
