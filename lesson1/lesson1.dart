import 'dart:io';

void main() {
  // Prompt the user for the first number
  stdout.write('Enter the value for a: ');
  double? a = double.parse(stdin.readLineSync()!);

  // Prompt the user for the second number
  stdout.write('Enter the value for b: ');
  double? b = double.parse(stdin.readLineSync()!);

  // Add the numbers
  double c = a + b;

  // Print the result
  print('The result of a + b is: $c');
}
