#include <iostream>
#include <string>
#include <iomanip>

int main() {
    std::string name1, name2, name3;
    int grade1, grade2, grade3;


    std::cout << "Student 1 - name: ";
    std::getline(std::cin, name1);
    std::cout << "Student 1 - grade: ";
    std::cin >> grade1;
    std::cin.ignore();

    std::cout << "Student 2 - name: ";
    std::getline(std::cin, name2);
    std::cout << "Student 2 - grade: ";
    std::cin >> grade2;
    std::cin.ignore();

    std::cout << "Student 3 - name: ";
    std::getline(std::cin, name3);
    std::cout << "Student 3 - grade: ";
    std::cin >> grade3;
    std::cin.ignore();

    double average = (grade1 + grade2 + grade3) / 3.0;
    
    std::cout << "\nAverage grade: " 
              << std::fixed << std::setprecision(2) 
              << average << std::endl;

    return 0;
}