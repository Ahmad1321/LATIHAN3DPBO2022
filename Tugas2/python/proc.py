class proc():
    __name = ""
    __price = 0

    # construct
    def __init__(self, name = "", price = 0):
        self.__type = type
        self.__name = name
        self.__price = price

    # set dan get
    def setname(self, name):
        self.__name = name
    
    def getname(self):
        return self.__name

    def setprice(self, price):
        self.__price = price
    
    def getprice(self):
        return self.__price

    # output
    def printproc(self):
        print("name : " + str(self.__name))
        print("price : " + str(self.__price))