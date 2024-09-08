use std::io;

fn main() {
    // Create mutable variables to store user input
    let mut a = String::new();
    let mut b = String::new();

    // Prompt the user for the first number
    println!("Enter the value for a: ");
    io::stdin().read_line(&mut a).expect("Failed to read line");

    // Prompt the user for the second number
    println!("Enter the value for b: ");
    io::stdin().read_line(&mut b).expect("Failed to read line");

    // Convert the input strings to numbers
    let a: f64 = a.trim().parse().expect("Please enter a valid number");
    let b: f64 = b.trim().parse().expect("Please enter a valid number");

    // Add the numbers
    let c = a + b;

    // Print the result
    println!("The result of a + b is: {}", c);
}
