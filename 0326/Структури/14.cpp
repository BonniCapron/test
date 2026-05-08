#include <iostream>
#include <string>
#include <iomanip>

int main() {
    std::string name1, name2, name3;
    double price1, price2, price3;
    int quantity1, quantity2, quantity3;

    std::cout << "Product 1 - name: ";
    std::getline(std::cin, name1);
    std::cout << "Product 1 - price: ";
    std::cin >> price1;
    std::cin.ignore();
    std::cout << "Product 1 - quantity: ";
    std::cin >> quantity1;
    std::cin.ignore();

    std::cout << "Product 2 - name: ";
    std::getline(std::cin, name2);
    std::cout << "Product 2 - price: ";
    std::cin >> price2;
    std::cin.ignore();
    std::cout << "Product 2 - quantity: ";
    std::cin >> quantity2;
    std::cin.ignore();

    std::cout << "Product 3 - name: ";
    std::getline(std::cin, name3);
    std::cout << "Product 3 - price: ";
    std::cin >> price3;
    std::cin.ignore();
    std::cout << "Product 3 - quantity: ";
    std::cin >> quantity3;
    std::cin.ignore();

    double total = (price1 * quantity1) + (price2 * quantity2) + (price3 * quantity3);

    std::cout << "\nTotal warehouse value: " 
              << std::fixed << std::setprecision(2) 
              << total << " UAH" << std::endl;

    return 0;
}