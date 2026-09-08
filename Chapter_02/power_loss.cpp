// Power loss is formally defined as the product of resistance and the square of the current.
// Resistance is defined as resistivity * (L / A), where L is the length and A is the cross-sectional area.

// Write a program that prompts the user to enter L, A, resistivity, and current,
// and returns the power loss of a transmission line.

#include <iomanip>
#include <iostream>

int main()
{
	double length;
	double area;
	double resistivity;
	double current;

	std::cout << "Enter length, area, resistivity, and current: ";
	std::cin >> length >> area >> resistivity >> current;

	if (area == 0)
	{
		std::cout << "Error: area must not be zero.\n";
		return 1;
	}

	const double resistance = resistivity * (length / area);
	const double powerLoss = resistance * current * current;

	std::cout << std::fixed << std::setprecision(2)
			  << "Power loss: " << powerLoss << '\n';

	return 0;
}

