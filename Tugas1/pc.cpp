#include "proc.cpp"
#include "ram.cpp"
#include "disk.cpp"

using namespace std;

class pc{
	private:
		proc procpc;
        ram rampc;
        disk diskpc;
        int total;
	
	public:
		//Construct
		pc(){}
		
		pc(proc procpc, ram rampc, disk diskpc){
			this->procpc = procpc;
			this->rampc = rampc;
			this->diskpc = diskpc;
            this->total = procpc.getpricep() + rampc.getpricer() + diskpc.getpriced();
		}
		
		//Set dan Get
		void setprocpc(proc procpc)
        {
            this->procpc = procpc;
        }
		proc getprocpc(){
			return this->procpc;
		}
		
		void setrampc(ram rampc){
			this->rampc = rampc;
		}
		ram getrampc(){
			return this->rampc;
		}
		
		void setdiskpc(disk diskpc){
			this->diskpc = diskpc;
		}
		disk getdiskpc(){
			return this->diskpc;
		}

        int gettotal(){
            int x =  this->procpc.getpricep() + this->rampc.getpricer() + this->diskpc.getpriced();
            return x;
        }

        void output(){
            cout << "Procesor PC" << endl;
            this->procpc.printprosesor();
            cout << endl << "RAM PC" << endl;
            this->rampc.printram();
            cout << endl << "Disk PC" << endl;
            this->diskpc.printdisk();
            cout << endl << "Total Harga : " << this->gettotal() << endl;
        }
			
		~pc(){
		}
};