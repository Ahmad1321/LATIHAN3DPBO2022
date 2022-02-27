public class pc{
    private proc procpc;
    private Ram Rampc;
    private disk diskpc;
    private int total;

    // construct
    public pc() {}

    public pc(proc procpc, Ram Rampc, disk diskpc){
        this.procpc = procpc;
        this.Rampc = Rampc;
        this.diskpc = diskpc;
        this.total = procpc.getpricep() + Rampc.getpricer() + diskpc.getpriced();
    }
	
	//set and get
	public void setprocpc(proc procpc){
		this.procpc = procpc;
	}
	public proc getprocpc(){
		return this.procpc;
	}
	
	public void setRampc(Ram Rampc){
		this.Rampc = Rampc;
	}
	public Ram getRampc(){
		return this.Rampc;
	}
	
	public void setdiskpc(disk diskpc){
		this.diskpc = diskpc;
	}
	public disk getdiskpc(){
		return this.diskpc;
	}

    public int gettotal(){
        return this.total = procpc.getpricep() + Rampc.getpricer() + diskpc.getpriced();
    }

    public void printpc(){
        System.out.println("Prosesor PC :");
		procpc.printproc();
		System.out.println();
        System.out.println("RAM PC :");
		Rampc.printRam();
		System.out.println();
		System.out.println("Disk PC :");
		diskpc.printdisk();
		System.out.println();
		System.out.println("Total Harga : " + gettotal()); 
    }

}