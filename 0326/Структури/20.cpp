#include <iostream>
#include <string>
#include <iomanip>

struct Date {
    int day;
    int month;
    int year;
};

struct Time {
    int hours;
    int minutes;
};

struct Event {
    std::string name;
    Date date;
    Time time;
};

int main() {
    Event event;

    std::cout << "Event name: ";
    std::getline(std::cin, event.name);

    std::cout << "Date - day: ";
    std::cin >> event.date.day;
    std::cout << "Date - month: ";
    std::cin >> event.date.month;
    std::cout << "Date - year: ";
    std::cin >> event.date.year;

    std::cout << "Time - hours: ";
    std::cin >> event.time.hours;
    std::cout << "Time - minutes: ";
    std::cin >> event.time.minutes;

    std::cout << "\nEvent: " << event.name << std::endl;
    std::cout << "When: "
              << std::setfill('0') << std::setw(2) << event.date.day << "."
              << std::setw(2) << event.date.month << "."
              << event.date.year
              << " at "
              << std::setw(2) << event.time.hours << ":"
              << std::setw(2) << event.time.minutes << std::endl;

    return 0;
}