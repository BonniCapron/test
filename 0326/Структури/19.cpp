#include <iostream>
#include <iomanip>

struct Point {
    double x;
    double y;
};

struct Rectangle {
    Point bottomLeft;
    Point topRight;
};

int main() {
    Rectangle rect;


    std::cout << "Bottom-left - x: ";
    std::cin >> rect.bottomLeft.x;
    std::cout << "Bottom-left - y: ";
    std::cin >> rect.bottomLeft.y;

    std::cout << "Top-right - x: ";
    std::cin >> rect.topRight.x;
    std::cout << "Top-right - y: ";
    std::cin >> rect.topRight.y;

 
    double width = rect.topRight.x - rect.bottomLeft.x;
    double height = rect.topRight.y - rect.bottomLeft.y;
    double area = width * height;

    std::cout << "\nArea: " 
              << std::fixed << std::setprecision(2) 
              << area << std::endl;

    return 0;
}
