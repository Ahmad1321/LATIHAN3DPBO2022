<?php

class proc
{
	
	private $name = "";
	private $pricep = 0;
	
	
	//Construct
	public function __construct($name = "", $pricep = 0){
		$this->name = $name;
		$this->pricep = $pricep;
	}
	
	//Set dan get
	public function setname($name){
		$this->name = $name;
	}
	public function getname(){
		return $this->name;
	}
	
	public function setpricep($pricep){
		$this->pricep = $pricep;
	}
	public function getpricep(){
		return $this->pricep;
	}

    //Print Output
    public function printproc(){
		echo "Nama : ". $this->getname(). "<br/>";
		echo "Harga : ". $this->getpricep(). "<br/>";
	}
}
?>