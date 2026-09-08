// Write a program that prompts the user to enter two integer values.
// Store these values in int variables named val1 and val2.
// Write your program to determine the smaller, larger, sum, difference, product, and ratio of these values and report them to the user.

#include <iomanip>
#include <iostream>

int main() {
	int val1;
	int val2;

	std::cout << "Enter two integer values: ";
	std::cin >> val1 >> val2;

	const int smaller = val1 < val2 ? val1 : val2;
	const int larger = val1 > val2 ? val1 : val2;

	std::cout << "Smaller: " << smaller << '\n'
			  << "Larger: " << larger << '\n'
			  << "Sum: " << val1 + val2 << '\n'
			  << "Difference (val1 - val2): " << val1 - val2 << '\n'
			  << "Product: " << val1 * val2 << '\n';

	if (val2 != 0) {
		std::cout << "Ratio (val1 / val2): "
				  << std::fixed << std::setprecision(2)
				  << static_cast<double>(val1) / val2 << '\n';
	} else {
		std::cout << "Ratio (val1 / val2): undefined (division by zero)\n";
	}

	return 0;
}

