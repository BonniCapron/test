#include <iostream>
using namespace std;

int main() {
    double x;
    cout << "Введіть число: ";
    cin >> x;

    if (x > 0) {
        cout << "Число є додатнім." << endl;
    } else if (x < 0) {
        cout << "Число є від’ємним." << endl;
    } else {
        cout << "Число дорівнює нулю." << endl;
    }

    return 0;
}
