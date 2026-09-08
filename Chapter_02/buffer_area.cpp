#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

struct Point {
    double x;
    double y;
};

int main() {
    Point center;
    cout << "Enter the center point coordinates (x y): ";
    cin >> center.x >> center.y;

    int bufferCount;
    cout << "Enter the number of buffer sizes: ";
    cin >> bufferCount;

    vector<double> buffers(bufferCount);
    cout << "Enter the buffer distances in kilometres: " << endl;
    for (int i = 0; i < bufferCount; ++i) {
        cin >> buffers[i];
    }

    int pointCount;
    cout << "Enter the number of points to check: ";
    cin >> pointCount;

    vector<Point> points(pointCount);
    cout << "Enter the points as x y:" << endl;
    for (int i = 0; i < pointCount; ++i) {
        cin >> points[i].x >> points[i].y;
    }

    cout << fixed << setprecision(2);

    for (int i = 0; i < bufferCount; ++i) {
        vector<Point> insidePoints;

        for (int j = 0; j < pointCount; ++j) {
            double distance = sqrt(pow(points[j].x - center.x, 2) +
                                   pow(points[j].y - center.y, 2));

            if (distance <= buffers[i]) {
                insidePoints.push_back(points[j]);
            }
        }

        cout << "\nBuffer " << i + 1 << " (radius " << buffers[i] << " km):\n";

        if (insidePoints.empty()) {
            cout << "No points are inside this buffer.\n";
        } else {
            cout << "Points inside this buffer:\n";
            for (const Point &p : insidePoints) {
                cout << "(" << p.x << ", " << p.y << ")\n";
            }
        }
    }

    return 0;
}
