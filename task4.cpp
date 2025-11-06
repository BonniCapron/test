#include <iostream>
#include <string> 
using namespace std;

int main() {
    int number;
    cout << "Введіть число: ";
    cin >> number;
    string str = to_string(number);

    cout << "Число у вигляді рядка: " << str << endl;

    return 0;
}
