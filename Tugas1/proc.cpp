#include <iostream>
#include <string>

using namespace std;

class proc{
	private:
		string name;
        int pricep;
	
	public:
		//Construct
		proc(){}
		
		proc(string name, int pricep){
			this->name = name;
			this->pricep = pricep;
		}
		
		//Set dan Get
		void setname(string name)
        {
            this->name = name;
        }
		string getname(){
			return this->name;
		}
		
		void setpricep(int pricep){
			this->pricep = pricep;
		}
		int getpricep(){
			return this->pricep;
		}

        void printprosesor(){
            cout << "Nama  Procesor : " << getname() << endl;
            cout << "Harga Procesor : " << getpricep() << endl;
        }	
		
		~proc(){
		}
};