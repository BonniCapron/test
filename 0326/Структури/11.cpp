#include <iostream>
#include <string>

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


    std::cout << "\nResults:" << std::endl;
    std::cout << "1. " << name1 << " - " << grade1 << std::endl;
    std::cout << "2. " << name2 << " - " << grade2 << std::endl;
    std::cout << "3. " << name3 << " - " << grade3 << std::endl;

    return 0;
}