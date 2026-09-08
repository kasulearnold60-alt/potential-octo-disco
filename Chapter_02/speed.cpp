// (Average speed) Assume a runner runs 14 kilometers in 45 minutes and 30 seconds.
// Write a program that displays the average speed in miles per hour. (Note that
// 1 mile is 1.6 kilometers.)

#include <iomanip>
#include <iostream>

int main()
{
	const double distanceInMiles = 14.0 / 1.6;
	const double timeInHours = (45.0 * 60.0 + 30.0) / 3600.0;
	const double averageSpeed = distanceInMiles / timeInHours;

	std::cout << std::fixed << std::setprecision(2)
			  << "Average speed: " << averageSpeed << " miles per hour\n";

	return 0;
}

