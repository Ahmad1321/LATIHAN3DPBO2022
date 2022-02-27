<?php
include "disk.php";
include "proc.php";
include "ram.php";


class pc
{
	
    //Attribut
    private $procpc;
    private $diskpc;
    private $rampc;
	private $total = 0;
	
	
	//Construct
	public function __construct($procpc, $diskpc, $rampc){
		$this->procpc = $procpc;
		$this->diskpc = $diskpc;
		$this->rampc = $rampc;
        $this->total = $procpc->getpricep() + $diskpc->getpriced() + $rampc->getpricer();
	}
	
	//Set dan get
	public function setprocpc($procpc){
		$this->procpc = $procpc;
	}
	public function getprocpc(){
		return $this->procpc;
	}
	
	public function setdiskpc($diskpc){
		$this->diskpc = $diskpc;
	}
	public function getdiskpc(){
		return $this->diskpc;
	}
	
	public function setrampc($rampc){
		$this->rampc = $rampc;
	}
	public function getrampc(){
		return $this->rampc;
	}

    //Print Pc
    public function printpc(){
		echo "Procesor PC :". "<br/>";
        $this->procpc->printproc();
        echo "<br/>";
        echo "RAM PC :". "<br/>";
        $this->rampc->printram();
        echo "<br/>";
		echo "Disk PC :". "<br/>";
        $this->diskpc->printdisk();
        echo "<br/>";
        echo "Total Harga : ". $this->total;
	}
}
?>