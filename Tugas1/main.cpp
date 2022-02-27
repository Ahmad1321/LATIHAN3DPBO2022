#include "pc.cpp"
using namespace std;

int main(){
	//Menggunakan Construct
	pc data;
    proc pc1("Intel",100);
    ram pc2("4 GB", 200);
    disk pc3("SSD","512 GB", 300);
	
	//Menggunakan Set
	data.setprocpc(pc1);
	data.setrampc(pc2);
	data.setdiskpc(pc3);

	//Print Data	
	data.output();
}