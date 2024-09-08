using System;

class Program
{
    static void Main()
    {
        // Prompt the user for the first number
        Console.Write("Enter the value for a: ");
        string inputA = Console.ReadLine();
        double a = Convert.ToDouble(inputA);

        // Prompt the user for the second number
        Console.Write("Enter the value for b: ");
        string inputB = Console.ReadLine();
        double b = Convert.ToDouble(inputB);

        // Add the numbers
        double c = a + b;

        // Print the result
        Console.WriteLine($"The result of a + b is: {c}");
    }
}
