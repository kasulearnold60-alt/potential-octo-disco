// (Population projection) UBoS projects population based on the
// following assumptions:
// One birth every 7 seconds
// One death every 13 seconds
// One new immigrant every 45 seconds
// Write a program to display the population for each of the next five years. Assume the current population is 312032486 and one year has 365 days.

#include <iostream>

int main()
{
	constexpr long long secondsPerYear = 365LL * 24 * 60 * 60;
	long long population = 312032486;

	const long long birthsPerYear = secondsPerYear / 7;
	const long long deathsPerYear = secondsPerYear / 13;
	const long long immigrantsPerYear = secondsPerYear / 45;

	for (int year = 1; year <= 5; ++year)
	{
		population += birthsPerYear - deathsPerYear + immigrantsPerYear;
		std::cout << "Year " << year << ": " << population << '\n';
	}

	return 0;
}


