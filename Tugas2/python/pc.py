from proc import proc
from ram import ram
from disk import disk

class pc():
    __procpc = proc()
    __rampc = ram()
    __diskpc = disk()
    __total = 0

    # construct
    def __init__(self, procpc = proc(), rampc = ram(), diskpc = disk()):
        self.__procpc = procpc
        self.__rampc = rampc
        self.__diskpc = diskpc
        self.__total = procpc.getprice() + rampc.getpricer() + diskpc.getpricep()

    # set dan get
    def setprocpc(self, procpc):
        self.__procpc = procpc

    def getprocpc(self):
        return self.__procpc
    
    def setrampc(self, rampc):
        self.__rampc = rampc
    
    def getrampc(self):
        return self.__rampc

    def setdiskpc(self, diskpc):
        self.__diskpc = diskpc
    
    def getdiskpc(self):
        return self.__diskpc

    def gettotal(self):
        self.__total = self.__procpc.getprice() + self.__rampc.getpricer() + self.__diskpc.getpricep()
        total = self.__total
        return total

    # output
    def printpc(self):
        print("Prosesor PC : ")
        self.__procpc.printproc()
        print()
        print("RAM PC : " )
        self.__rampc.printram()
        print()
        print("Disk PC : ")
        self.__diskpc.printdisk()
        print()
        print("Total Harga : " + str(self.__total))