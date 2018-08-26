<?php
echo "10000\r\n";
for ($j = 90000; $j <= 100000; $j++) {
	$n = $j;
	echo $n."\r\n";
	for ($i = 1; $i <= $n; $i++) {
		echo $i." ";
	}
	echo "\r\n";
}
?>