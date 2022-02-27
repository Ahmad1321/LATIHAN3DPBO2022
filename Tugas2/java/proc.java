public class proc{
    private String name;
    private int pricep;

    // construct
    public proc() {}

    public proc(String name, int pricep){
        this.name = name;
        this.pricep = pricep;
    }
	
	//set and get
	public void setname(String name){
		this.name = name;
	}
	public String getname(){
		return this.name;
	}
	
	public void setpricep(int pricep){
		this.pricep = pricep;
	}
	public int getpricep(){
		return this.pricep;
	}

    public void printproc(){
        System.out.println("Nama : " + getname());
		System.out.println("Harga : " + getpricep());
    }

}