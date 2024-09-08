package main

import (
	"fmt"
)

func main() {
	var a, b float64

	// Get input from the user
	fmt.Print("Enter the value for a: ")
	fmt.Scanln(&a)

	fmt.Print("Enter the value for b: ")
	fmt.Scanln(&b)

	// Add the numbers
	c := a + b

	// Print the result
	fmt.Printf("The result of a + b is: %f\n", c)
}
