<?php

class disk
{
	
	private $type = "";
	private $capacity = "";
	private $priced = 0;
	
	//Construct
	public function __construct($type = "", $capacity = "", $priced = 0){
		$this->type = $type;
		$this->capacity = $capacity;
		$this->priced = $priced;
	}
	
	//Set dan get
	public function settype($type){
		$this->type = $type;
	}
	public function gettype(){
		return $this->type;
	}
	
	public function setcapacity($capacity){
		$this->capacity = $capacity;
	}
	public function getcapacity(){
		return $this->capacity;
	}
	
	public function setpriced($priced){
		$this->priced = $priced;
	}
	public function getpriced(){
		return $this->priced;
	}

    //Print
    public function printdisk(){
		echo "Tipe : ". $this->gettype(). "<br/>";
        echo "Kapasitas : ". $this->getcapacity(). "<br/>";
		echo "Harga : ". $this->getpriced(). "<br/>";
	}
}
?>