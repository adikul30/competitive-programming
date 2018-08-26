<?php
echo "100\r\n";
for ($j = 1; $j <= 100; $j++) {
	$n = rand(3, 100);
	echo $n."\r\n";
	for ($i = 0; $i < $n; $i++) {
		echo rand(1, 1000)." ";
	}
	echo "\r\n";
}
?>