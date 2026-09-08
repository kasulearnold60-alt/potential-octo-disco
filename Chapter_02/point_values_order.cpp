// Modify the program above to ask the user to enter floating-point values and store them in double  variables.
// Compare the outputs of the two programs for some inputs of your choice.
// Are the results the same? Should they be? What’s the difference?

#include <iomanip>
#include <iostream>

int main()
{
	double val1;
	double val2;

	std::cout << "Enter two floating-point values: ";
	std::cin >> val1 >> val2;

	const double smaller = val1 < val2 ? val1 : val2;
	const double larger = val1 > val2 ? val1 : val2;

	std::cout << std::fixed << std::setprecision(2)
			  << "Smaller: " << smaller << '\n'
			  << "Larger: " << larger << '\n'
			  << "Sum: " << val1 + val2 << '\n'
			  << "Difference (val1 - val2): " << val1 - val2 << '\n'
			  << "Product: " << val1 * val2 << '\n';

	if (val2 != 0)
	{
		std::cout << "Ratio (val1 / val2): " << val1 / val2 << '\n';
	}
	else
	{
		std::cout << "Ratio (val1 / val2): undefined (division by zero)\n";
	}

	return 0;
}
