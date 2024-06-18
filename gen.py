from os import system
from sys import argv

#CHANGE THIS
path = "D:/CODE/test"

path = path + "/"
cmd1 = "input " + path + "testcase/"
cmd2 = ".in"
cmd3 = "output " + path + "testcase/"
cmd4 = ".in " + path + "testcase/"
cmd5 = ".out"
cmd6 = "g++ " + path + "test.inp.cpp -o input"
cmd7 = "g++ " + path + "test.out.cpp -o output"

l = int(argv[1])
r = int(argv[2])

system(cmd6)
system(cmd7)
print("compile")
for i in range(l, r + 1):
    i = str(i)
    system(cmd1 + i + cmd2)
    system(cmd3 + i + cmd4 + i + cmd5)
    print(i)