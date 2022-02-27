public class disk{
    private String typed;
    private String capacity;
    private int priced;

    // construct
    public disk() {}

    public disk(String typed, String capacity, int priced){
        this.typed = typed;
        this.capacity = capacity;
        this.priced = priced;
    }
	
	//set and get
	public void settyped(String typed){
		this.typed = typed;
	}
	public String gettyped(){
		return this.typed;
	}
	
	public void setcapacity(String capacity){
		this.capacity = capacity;
	}
	public String getcapacity(){
		return this.capacity;
	}
	
	public void setpriced(int priced){
		this.priced = priced;
	}
	public int getpriced(){
		return this.priced;
	}

    public void printdisk(){
        System.out.println("Tipe : " + gettyped());
        System.out.println("Kapasitas : " + getcapacity());
		System.out.println("Harga : " + getpriced());
    }

}