// Write a program that outputs an acceptance letter for Makerere University. It should prompt a user to enter their first name, last name, study program, academic year.
// The program should have autodates

// Example:

// Date: 27th August 2026

// To: John Okello,

// Dear John,

// CONGRATULATIONS! I am pleased to inform you that the Makerere University 
// Admissions Board has approved your application for admission to the 
// 2027/2028 academic year.

// You have been offered a place for the following course:
// PROGRAM: Bachelor of Science in Computer and Communication Engineering

// As a student of Makerere University, you will be part of a historic 
// institution dedicated to academic excellence and innovation. Please ensure 
// that you report to the Academic Registrar's office with your original 
// academic documents for verification during the orientation week.

// We look forward to welcoming you to the Makerere University.

// Yours sincerely,


// John Doe
// Registra

#include <array>
#include <chrono>
#include <ctime>
#include <iostream>
#include <string>

std::string ordinal_suffix(int day) {
	if (day % 100 >= 11 && day % 100 <= 13) {
		return "th";
	}

	switch (day % 10) {
	case 1:
		return "st";
	case 2:
		return "nd";
	case 3:
		return "rd";
	default:
		return "th";
	}
}

int main() {
	std::string first_name;
	std::string last_name;
	std::string study_program;
	std::string academic_year;

	std::cout << "Enter your first name: ";
	std::getline(std::cin, first_name);
	std::cout << "Enter your last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Enter your study program: ";
	std::getline(std::cin, study_program);
	std::cout << "Enter the academic year: ";
	std::getline(std::cin, academic_year);

	const auto current_time = std::chrono::system_clock::to_time_t(
		std::chrono::system_clock::now());
	std::tm local_date{};
#ifdef _WIN32
	localtime_s(&local_date, &current_time);
#else
	local_date = *std::localtime(&current_time);
#endif

	constexpr std::array<const char*, 12> months = {
		"January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December"
	};
	const int day = local_date.tm_mday;

	std::cout << "\nDate: " << day << ordinal_suffix(day) << ' '
			  << months[local_date.tm_mon] << ' '
			  << local_date.tm_year + 1900 << "\n\n";
	std::cout << "To: " << first_name << ' ' << last_name << ",\n\n";
	std::cout << "Dear " << first_name << ",\n\n";
	std::cout << "CONGRATULATIONS! I am pleased to inform you that the Makerere University\n"
			  << "Admissions Board has approved your application for admission to the\n"
			  << academic_year << " academic year.\n\n";
	std::cout << "You have been offered a place for the following course:\n"
			  << "PROGRAM: " << study_program << "\n\n";
	std::cout << "As a student of Makerere University, you will be part of a historic\n"
			  << "institution dedicated to academic excellence and innovation. Please ensure\n"
			  << "that you report to the Academic Registrar's office with your original\n"
			  << "academic documents for verification during the orientation week.\n\n";
	std::cout << "We look forward to welcoming you to Makerere University.\n\n"
			  << "Yours sincerely,\n\n\n"
			  << first_name << ' ' << last_name << "\n"
			  << "Registrar\n";

	return 0;
}