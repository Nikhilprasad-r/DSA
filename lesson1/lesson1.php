<?php
// Prompt the user for input
echo "Enter the value for a: ";
$a = trim(fgets(STDIN));

echo "Enter the value for b: ";
$b = trim(fgets(STDIN));

// Convert input to float and calculate the sum
$c = (float)$a + (float)$b;

// Print the result
echo "The result of a + b is: $c\n";
?>
