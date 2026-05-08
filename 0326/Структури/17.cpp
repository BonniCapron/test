#include <iostream>
#include <iomanip>
#include <cmath>

struct Point {
    double x;
    double y;
};

struct Segment {
    Point start;
    Point end;
};

int main() {
    Segment seg;

    std::cout << "Start point - x: ";
    std::cin >> seg.start.x;
    std::cout << "Start point - y: ";
    std::cin >> seg.start.y;

    std::cout << "End point - x: ";
    std::cin >> seg.end.x;
    std::cout << "End point - y: ";
    std::cin >> seg.end.y;

    double dx = seg.end.x - seg.start.x;
    double dy = seg.end.y - seg.start.y;
    double length = std::sqrt(dx * dx + dy * dy);

    std::cout << "\nSegment length: " 
              << std::fixed << std::setprecision(2) 
              << length << std::endl;

    return 0;
}