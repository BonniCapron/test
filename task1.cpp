#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Введіть два числа: ";
    cin >> a >> b;
    int sum = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    cout << "Сума всіх парних чисел у діапазоні від " 
         << a << " до " << b << " дорівнює " << sum << endl;

    return 0;
}
