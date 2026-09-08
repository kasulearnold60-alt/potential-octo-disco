#include <iostream>
#include <string>

using namespace std;

int main() {
	string a, b, c;

	cout << "Enter three strings:\n";
	getline(cin, a);
	getline(cin, b);
	getline(cin, c);

	if (a > b) {
		string temp = a;
		a = b;
		b = temp;
	}

	if (a > c) {
		string temp = a;
		a = c;
		c = temp;
	}

	if (b > c) {
		string temp = b;
		b = c;
		c = temp;
	}

	cout << a << ", " << b << ", " << c << endl;

	return 0;
}