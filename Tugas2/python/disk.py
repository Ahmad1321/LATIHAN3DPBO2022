class disk():
    __type = ""
    __capacity = ""
    __pricep = 0

    # construct
    def __init__(self, type = "", capacity = "", pricep = 0):
        self.__type = type
        self.__capacity = capacity
        self.__pricep = pricep

    # set dan get
    def settype(self, type):
        self.__type = type

    def gettype(self):
        return self.__type
    
    def setcapacity(self, capacity):
        self.__capacity = capacity
    
    def getcapacity(self):
        return self.__capacity

    def setpricep(self, pricep):
        self.__pricep = pricep
    
    def getpricep(self):
        return self.__pricep

    # output
    def printdisk(self):
        print("type : " + str(self.__type))
        print("capacity : " + str(self.__capacity))
        print("price : " + str(self.__pricep))