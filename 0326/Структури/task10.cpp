#include <iostream>
#include <iomanip>
using namespace std;

struct Rectangle {
    double width;
    double height;
};

double area(Rectangle r) {
    return r.width * r.height;
}

int main() {
    Rectangle r1, r2;

    cout << "Rectangle 1 - width: ";
    cin >> r1.width;
    cout << "Rectangle 1 - height: ";
    cin >> r1.height;

    cout << "Rectangle 2 - width: ";
    cin >> r2.width;
    cout << "Rectangle 2 - height: ";
    cin >> r2.height;

    double area1 = area(r1);
    double area2 = area(r2);

    cout << fixed << setprecision(2);

    if (area1 > area2) {
        cout << "Rectangle 1 is larger (area: " << area1 << ")" << endl;
    } else if (area2 > area1) {
        cout << "Rectangle 2 is larger (area: " << area2 << ")" << endl;
    } else {
        cout << "Both rectangles have the same area" << endl;
    }

    return 0;
}