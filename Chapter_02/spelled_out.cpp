// Write a program that converts spelled-out numbers such as ‘‘zero’’ and ‘‘two’’ into digits, such as 0 and 2. When the user inputs a number, the program should print out the corresponding
// digit. Do it for the values 0, 1, 2, 3, and 4 and write out not a number I know if the user enters something that doesn’t correspond, such as stupid computer!.

#include <iostream>
#include <string>

int main()
{
	std::string numberWord;
	std::cin >> numberWord;

	if (numberWord == "zero")
		std::cout << 0;
	else if (numberWord == "one")
		std::cout << 1;
	else if (numberWord == "two")
		std::cout << 2;
	else if (numberWord == "three")
		std::cout << 3;
	else if (numberWord == "four")
		std::cout << 4;
	else
		std::cout << "Not a number I know";

	std::cout << '\n';
	return 0;
}


