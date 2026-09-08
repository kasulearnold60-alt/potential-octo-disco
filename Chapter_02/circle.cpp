#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    cout << "Please enter the radius of a circle\n";

    double radius = 0.0;
    cin >> radius;

    const double pi = 3.14159265358979323846;

    double area = radius * radius * pi;
    double perimeter = 2 * radius * pi;

    cout << fixed << setprecision(10);
    cout << "A circle of radius " << radius << " has:\n";
    cout << "Area = " << area << "\n";
    cout << "Perimeter = " << perimeter << "\n";

    return 0;
}

// Try
// Rewrite this program using a close approximation of π and return the value to a precision of 10 decimal places.
