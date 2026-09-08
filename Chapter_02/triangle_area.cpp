#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
	double x1, y1, x2, y2, x3, y3;

	std::cout << "Enter three points (x1 y1 x2 y2 x3 y3): ";
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	const double side1 = std::hypot(x2 - x1, y2 - y1);
	const double side2 = std::hypot(x3 - x2, y3 - y2);
	const double side3 = std::hypot(x1 - x3, y1 - y3);
	const double semiperimeter = (side1 + side2 + side3) / 2.0;
	const double area_squared = semiperimeter * (semiperimeter - side1) *
								(semiperimeter - side2) * (semiperimeter - side3);

	if (area_squared <= 0.0) {
		std::cout << "The points do not form a triangle.\n";
		return 1;
	}

	std::cout << std::fixed << std::setprecision(1)
			  << "The area of the triangle is " << std::sqrt(area_squared) << '\n';
	return 0;
}
