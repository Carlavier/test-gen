from os import mkdir, rename

def getString(n: int):
    s = str(n)
    if (len(s) < 2): s = "0" + s
    return s

codeName = "ACF1D"
context = "D:/namto/Desktop/test/testcase"


for i in range(1, 21):
    index = getString(i)
    rename(context + "/" + index + ".INP", context + "/" + str(i) + ".in")
    rename(context + "/" + index + ".OUT", context + "/" + str(i) + ".out")