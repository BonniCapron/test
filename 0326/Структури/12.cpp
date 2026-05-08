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

    std::string bestName = name1;
    int bestGrade = grade1;

    if (grade2 > bestGrade) {
        bestName = name2;
        bestGrade = grade2;
    }
    if (grade3 > bestGrade) {
        bestName = name3;
        bestGrade = grade3;
    }

    std::cout << "\nBest student: " << bestName << " (" << bestGrade << ")" << std::endl;

    return 0;
}