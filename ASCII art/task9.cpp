#include <iostream>

int main() {
    double sum;
    std::cout << "Введіть суму покупки: ";
    std::cin >> sum;

    if (sum > 1000)
        sum *= 0.95;
    else if (sum > 500)
        sum *= 0.97;

    std::cout << "Сума до оплати: " << sum << " грн\n";
    return 0;
}
