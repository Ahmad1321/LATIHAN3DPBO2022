class ram():
    __capacityr = ""
    __pricer = 0

    # construct
    def __init__(self, capacityr = "", pricer = 0):
        self.__type = type
        self.__capacityr = capacityr
        self.__pricer = pricer

    # set dan get
    def setcapacityr(self, capacityr):
        self.__capacityr = capacityr
    
    def getcapacityr(self):
        return self.__capacityr

    def setpricer(self, pricer):
        self.__pricer = pricer
    
    def getpricer(self):
        return self.__pricer

    # output
    def printram(self):
        print("capacity : " + str(self.__capacityr))
        print("price : " + str(self.__pricer))