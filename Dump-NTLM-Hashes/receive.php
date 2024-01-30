<?php
	// Receive data through a POST request and save it as a zip file with a filename based on the current time.
	$file = date("Hism") . ".zip";
	file_put_contents($file, file_get_contents("php://input"));
?>
