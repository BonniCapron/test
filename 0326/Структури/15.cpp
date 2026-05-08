#include <iostream>
#include <string>
#include <iomanip>

int main() {
    std::string name1, name2, name3;
    double price1, price2, price3;

    std::cout << "Product 1 - name: ";
    std::getline(std::cin, name1);
    std::cout << "Product 1 - price: ";
    std::cin >> price1;
    std::cin.ignore();

    std::cout << "Product 2 - name: ";
    std::getline(std::cin, name2);
    std::cout << "Product 2 - price: ";
    std::cin >> price2;
    std::cin.ignore();

    std::cout << "Product 3 - name: ";
    std::getline(std::cin, name3);
    std::cout << "Product 3 - price: ";
    std::cin >> price3;
    std::cin.ignore();

    std::string cheapestName = name1;
    double cheapestPrice = price1;

    if (price2 < cheapestPrice) {
        cheapestName = name2;
        cheapestPrice = price2;
    }
    if (price3 < cheapestPrice) {
        cheapestName = name3;
        cheapestPrice = price3;
    }

    std::cout << "\nCheapest: " << cheapestName 
              << " (" << std::fixed << std::setprecision(2) 
              << cheapestPrice << " UAH)" << std::endl;

    return 0;
}