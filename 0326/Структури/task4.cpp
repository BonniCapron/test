#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    Time t;

    cout << "Enter hours: ";
    cin >> t.hours;

    cout << "Enter minutes: ";
    cin >> t.minutes;

    cout << "Enter seconds: ";
    cin >> t.seconds;

    int totalSeconds = t.hours * 3600 + t.minutes * 60 + t.seconds;

    cout << "Total seconds: " << totalSeconds << endl;

    return 0;
}