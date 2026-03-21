#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Point {
    double x;
    double y;
};

int main() {
    Point p1, p2;

    cout << "Point 1 - Enter x: ";
    cin >> p1.x;
    cout << "Point 1 - Enter y: ";
    cin >> p1.y;

    cout << "Point 2 - Enter x: ";
    cin >> p2.x;
    cout << "Point 2 - Enter y: ";
    cin >> p2.y;

    double distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    cout << fixed << setprecision(2);
    cout << "Distance: " << distance << endl;

    return 0;
}