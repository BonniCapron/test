#include <iostream>
#include <string>
#include <iomanip>

struct Product {
    std::string name;
    double price;
};

struct Order {
    Product product;
    int quantity;
};

int main() {
    Order order;


    std::cout << "Product name: ";
    std::getline(std::cin, order.product.name);

    std::cout << "Product price: ";
    std::cin >> order.product.price;

    std::cout << "Order quantity: ";
    std::cin >> order.quantity;

    double total = order.product.price * order.quantity;

    std::cout << "\nOrder total: " 
              << std::fixed << std::setprecision(2) 
              << total << " UAH" << std::endl;

    return 0;
}