// Write a program that takes an operation followed by two operands and outputs the result. For example:
// + 100 3.14
// ∗ 4 5

// Read the operation into a string called operation and use an if-statement to figure out which
// operation the user wants, for example, if (operation=="+"). Read the operands into variables
// of type double. Implement this for operations called +, −, ∗, /, plus, minus, mul, and div with
// their obvious meanings.

#include <iostream>
#include <string>

int main()
{
	std::string operation;
	double firstOperand;
	double secondOperand;

	std::cin >> operation >> firstOperand >> secondOperand;

	if (operation == "+" || operation == "plus")
	{
		std::cout << "Result: " << firstOperand + secondOperand << '\n';
	}
	else if (operation == "-" || operation == "−" || operation == "minus")
	{
		std::cout << "Result: " << firstOperand - secondOperand << '\n';
	}
	else if (operation == "*" || operation == "∗" || operation == "mul")
	{
		std::cout << "Result: " << firstOperand * secondOperand << '\n';
	}
	else if (operation == "/" || operation == "div")
	{
		if (secondOperand == 0)
		{
			std::cout << "Error: division by zero is not allowed.\n";
		}
		else
		{
			std::cout << "Result: " << firstOperand / secondOperand << '\n';
		}
	}
	else
	{
		std::cout << "Error: unknown operation.\n";
	}

	return 0;
}

