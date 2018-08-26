<?php
echo "50\r\n";
for ($j = 1; $j <= 50; $j++) {
	$n = rand(1, 100);
	echo $n."\r\n";
	for ($i = 0; $i < $n; $i++) {
		echo rand(1, 100)." ". rand(1, 100);
		echo "\r\n";
	}
}
?>