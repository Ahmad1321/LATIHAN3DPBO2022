#include <iostream>
#include <string>

using namespace std;

class ram{
	private:
		string capacityr;
        int pricer;
	
	public:
		//Construct
		ram(){}
		
		ram(string capacityr, int pricer){
			this->capacityr = capacityr;
			this->pricer = pricer;
		}
		
		//Set dan Get
		void setcapacityr(string capacityr)
        {
            this->capacityr = capacityr;
        }
		string getcapacityr(){
			return this->capacityr;
		}
		
		void setpricer(int pricer){
			this->pricer = pricer;
		}
		int getpricer(){
			return this->pricer;
		}

        void printram(){
            cout << "Kapasitas RAM : " << getcapacityr() << endl;
            cout << "Harga RAM     : " << getpricer() << endl;
        }		
		
		~ram(){
		}
};