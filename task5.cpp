#include <iostream>
#include <iomanip>  
using namespace std;
bool isLucky(int number) {
    int digits[6];
    for (int i = 5; i >= 0; i--) {
        digits[i] = number % 10;
        number /= 10;
    }
    int sum1 = digits[0] + digits[1] + digits[2];
    int sum2 = digits[3] + digits[4] + digits[5];
    return sum1 == sum2;
}

int main() {
 

  int count = 0;
    for (int i = 0; i <= 999999; i++) {
        if (isLucky(i)) {
            cout << setw(6) << setfill('0') << i << endl;
            count++;
        }
    }

    cout << "Загальна кількість щасливих квитків: " << count << endl;
    return 0;
}
