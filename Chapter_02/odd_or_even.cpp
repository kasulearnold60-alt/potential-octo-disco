// Write a program to test an integer value to determine if it is odd or even.
// As always, make sure your output is clear and complete. In other words, don’t just output yes or no.
// Your output should stand alone, like The value 4 is an even number.

#include <iostream>

int main()
{
	int value;
	std::cin >> value;

	if (value % 2 == 0)
	{
		std::cout << "The value " << value << " is an even number.\n";
	}
	else
	{
		std::cout << "The value " << value << " is an odd number.\n";
	}

	return 0;
}

