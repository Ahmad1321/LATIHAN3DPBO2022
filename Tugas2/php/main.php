<?php
include "pc.php";

//Set data secara construct
$pc1 = new proc("Intel",100);
$pc2 = new ram("4 GB", 200);
$pc3 = new disk("SSD","512 GB", 300);
$data = new pc($pc1,$pc3,$pc2);

//Print output
$data->printpc();

?>