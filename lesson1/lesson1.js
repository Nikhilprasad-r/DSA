import * as readline from 'readline';

// Create an interface for reading input
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question('Enter the value for a: ', (aStr) => {
  rl.question('Enter the value for b: ', (bStr) => {
    const a = parseFloat(aStr); // Convert string input to number
    const b = parseFloat(bStr);
    const c = a + b;

    console.log(`The result of a + b is: ${c}`);

    rl.close(); // Close the readline interface
  });
});
