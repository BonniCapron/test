#include <iostream>
#include <string>
#include <iomanip>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    std::string name;
    Date birthDate;
};

int main() {
    Student student;
    
    std::cout << "Enter name: ";
    std::getline(std::cin, student.name);

    std::cout << "Enter day: ";
    std::cin >> student.birthDate.day;

    std::cout << "Enter month: ";
    std::cin >> student.birthDate.month;

    std::cout << "Enter year: ";
    std::cin >> student.birthDate.year;

    std::cout << "\n" << student.name << " was born on "
              << student.birthDate.day << "."
              << std::setfill('0') << std::setw(2) << student.birthDate.month << "."
              << student.birthDate.year << std::endl;

    return 0;
}