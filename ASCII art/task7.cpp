#include <iostream>
using namespace std;


double mySin(double x) {
    double term = x;
    double sum = x;

    for (int i = 1; i <= 5; i++) {
        term *= -1 * x * x / ((2 * i) * (2 * i + 1));
        sum += term;
    }
    return sum;
}

int main() {
    double v, alpha;
    const double g = 9.81;
    const double PI = 3.1415926535;

    cout << "Введіть швидкість v (м/с): ";
    cin >> v;

    cout << "Введіть кут α (градуси): ";
    cin >> alpha;

    double alphaRad = alpha * PI / 180.0;

    double L = (v * v * mySin(2 * alphaRad)) / g;

    cout << "Відстань польоту: " << L << " м" << endl;

    return 0;
}
