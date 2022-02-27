public class Ram{
    private String capacityr;
    private int pricer;

    // construct
    public Ram() {}

    public Ram(String capacityr, int pricer){
        this.capacityr = capacityr;
        this.pricer = pricer;
    }
	
	//set and get
	public void setcapacityr(String capacityr){
		this.capacityr = capacityr;
	}
	public String getcapacityr(){
		return this.capacityr;
	}
	
	public void setpricer(int pricer){
		this.pricer = pricer;
	}
	public int getpricer(){
		return this.pricer;
	}

    public void printRam(){
        System.out.println("Kapasitas : " + getcapacityr());
		System.out.println("Harga : " + getpricer());
    }

}