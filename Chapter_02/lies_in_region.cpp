// Consider an irregularly shaped region defined by a number of
// coordinates that form its boundary. Write a program to determine
// whether a given point lies within the region.

// Expand the program to identify and output all points in a given
// set of coordinates that lie within the specified region.

#include <cmath>
#include <iostream>
#include <vector>

struct Point {
    double x;
    double y;
};

double upper_boundary(double x) {
    if (x <= 0.0) {
        return x * x;
    }
    if (x <= 3.0) {
        return 4.0 + std::sin(x);
    }
    return -2.0 * x + 10.0;
}

double lower_boundary(double x) {
    if (x <= -1.5) {
        return 2.0 * x + 5.0;
    }
    return 1.0 - std::sin(x);
}

bool is_inside(const Point& point) {
    constexpr double left_limit = -2.0;
    constexpr double right_limit = 4.0;
    constexpr double tolerance = 1e-9;

    if (point.x < left_limit - tolerance || point.x > right_limit + tolerance) {
        return false;
    }

    const double upper = upper_boundary(point.x);
    const double lower = lower_boundary(point.x);
    return point.y >= lower - tolerance && point.y <= upper + tolerance;
}

int main() {
    std::size_t point_count;
    std::cout << "Enter the number of points to test: ";
    std::cin >> point_count;

    std::vector<Point> points(point_count);
    std::cout << "Enter the points to test (x y):\n";
    for (Point& point : points) {
        std::cin >> point.x >> point.y;
    }

    std::cout << "\nPoints inside the region:\n";
    bool found_inside_point = false;
    for (const Point& point : points) {
        if (is_inside(point)) {
            std::cout << '(' << point.x << ", " << point.y << ")\n";
            found_inside_point = true;
        }
    }

    if (!found_inside_point) {
        std::cout << "None\n";
    }

    return 0;
}