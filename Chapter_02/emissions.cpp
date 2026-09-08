// Given a dataset of emission released in Kampala City;
// Date     Month       Year Quanity
// 08 8.0   '2026'      40
// 10 8.0   '2026'      60
// 12 8.0   '2027'      90

// Write a program that display date as dd/mm/yyy and Quantity in a tabular form. As usual, the program should prompt the user to enter values.

// Output example.

// Date           Year Quanity
// 08/8/2026      40
// 10/8/2026      60
// 12/8/2027      90

#include <iomanip>
#include <iostream>

int main() {
	const int record_count = 3;
	int days[record_count];
	int months[record_count];
	int years[record_count];
	int quantities[record_count];

	std::cout << "Enter the emission data for " << record_count << " records.\n";
	for (int record = 0; record < record_count; ++record) {
		std::cout << "Record " << record + 1
				  << " (day month year quantity): ";
		std::cin >> days[record] >> months[record]
				  >> years[record] >> quantities[record];
	}

	std::cout << "\nDate\t\tQuantity\n";
	for (int record = 0; record < record_count; ++record) {
		std::cout << std::setfill('0') << std::setw(2) << days[record]
				  << std::setfill(' ') << '/' << months[record]
				  << '/' << years[record] << "\t\t"
				  << quantities[record] << '\n';
	}

	return 0;
}
