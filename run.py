import sys
import os
import glob
proto_path = "./Proto/"
server_path = "./Server/"
client_path = "./Client/"
def run():
    for filename in glob.glob(r'./Proto/*.proto'):
        base = os.path.basename(filename)
        dir = os.path.dirname(filename)
        name = os.path.splitext(base)
        cmds = "protoc -o " +os.path.join(server_path, name[0]) + ".pb "+filename
        cmdc = "protoc --plugin=/usr/local/bin/protoc-gen-objc "+ filename + " --objc_out="+client_path
        os.system(cmds)
        os.system(cmdc)
        print cmds
        print cmdc

run()
