#include <algorithm>
#include <iomanip>
#include <iostream>
#include <array>

int main() {
	const std::array<std::array<int, 3>, 4> dataframe = {{
		{{100, 120, 80}},
		{{130, 140, 90}},
		{{110, 150, 100}},
		{{100, 105, 95}}
	}};

	std::cout << std::left << std::setw(8) << "Index"
			  << std::setw(10) << "Sum"
			  << std::setw(10) << "Mean"
			  << "Median\n";
	std::cout << "--------------------------------\n";

	for (std::size_t row = 0; row < dataframe.size(); ++row) {
		const auto values = dataframe[row];
		const int sum = values[0] + values[1] + values[2];
		const double mean = sum / 3.0;
		std::array<int, 3> sorted_values = values;
		std::sort(sorted_values.begin(), sorted_values.end());

		std::cout << std::left << std::setw(8) << row + 1
				  << std::setw(10) << sum
				  << std::setw(10) << std::fixed << std::setprecision(2) << mean
				  << sorted_values[1] << '\n';
	}

	return 0;
}

