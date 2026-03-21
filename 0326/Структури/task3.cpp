#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Point {
    double x;
    double y;
};

int main() {
    Point p;

    cout << "Enter x: ";
    cin >> p.x;

    cout << "Enter y: ";
    cin >> p.y;

    double distance = sqrt(p.x * p.x + p.y * p.y);

    cout << fixed << setprecision(2);
    cout << "Distance from origin: " << distance << endl;

    return 0;
}