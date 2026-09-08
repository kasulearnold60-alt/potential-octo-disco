#include <iostream>

int main() {
	double miles;

	std::cout << "Enter the number of miles: ";
	std::cin >> miles;

	const double kilometers = miles * 1.609;
	std::cout << miles << " miles is " << kilometers << " kilometers.\n";

	return 0;
}