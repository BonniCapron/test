#include <iostream>
using namespace std;

struct Complex {
    double real;
    double imag;
};

int main() {
    Complex c1, c2, sum;

    cout << "Complex 1 - real: ";
    cin >> c1.real;
    cout << "Complex 1 - imag: ";
    cin >> c1.imag;

    cout << "Complex 2 - real: ";
    cin >> c2.real;
    cout << "Complex 2 - imag: ";
    cin >> c2.imag;

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    cout << "Sum: " << sum.real << " + " << sum.imag << "i" << endl;

    return 0;
}