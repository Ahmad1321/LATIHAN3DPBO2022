public class Main{
	public static void main(String[] args){

		//Menggunakan Construct
		pc data = new pc();
        proc pc1 = new proc("Intel",100);
        Ram pc2 = new Ram("4 GB", 200);
        disk pc3 = new disk("SSD","512 GB", 300);
		
		//Menggunakan Set
		data.setprocpc(pc1);
	    data.setRampc(pc2);
	    data.setdiskpc(pc3);
		
		//Print Output
		data.printpc();
	}
	
}