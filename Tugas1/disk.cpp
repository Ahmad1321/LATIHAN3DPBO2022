#include <iostream>
#include <string>

using namespace std;

class disk{
	private:
		string type;
        string capacity;
        int priced;
	
	public:
		//Construct
		disk(){}
		
		disk(string type, string capacity, int priced){
			this->type = type;
			this->capacity = capacity;
			this->priced = priced;
		}
		
		//Set dan Get
		void settype(string type)
        {
            this->type = type;
        }
		string gettype(){
			return this->type;
		}
		
		void setcapacity(string capacity){
			this->capacity = capacity;
		}
		string getcapacity(){
			return this->capacity;
		}
		
		void setpriced(int priced){
			this->priced = priced;
		}
		int getpriced(){
			return this->priced;
		}
        
        void printdisk(){
            cout << "Tipe Disk      : " << gettype() << endl;
            cout << "Kapasitas Disk : " << getcapacity() << endl;
            cout << "Harga Disk     : " << getpriced() << endl;
        }		
			
		
		~disk(){
		}
};