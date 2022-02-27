<?php

class ram
{
	//Attribute
	private $capacityr = "";
	private $pricer = 0;
	
	
	//Construct
	public function __construct($capacityr = "", $pricer = 0){
		$this->capacityr = $capacityr;
		$this->pricer = $pricer;
	}
	
	//Set dan get
	public function setcapacityr($capacityr){
		$this->capacityr = $capacityr;
	}
	public function getcapacityr(){
		return $this->capacityr;
	}
	
	public function setpricer($pricer){
		$this->pricer = $pricer;
	}
	public function getpricer(){
		return $this->pricer;
	}

    //Output
    public function printram(){
		echo "Kapasitas : ". $this->getcapacityr(). "<br/>";
		echo "Harga : ". $this->getpricer(). "<br/>";
	}
}
?>