#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int toSeconds(Time t) {
    return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

int main() {
    Time t1, t2;

    cout << "Time 1 - hours: ";
    cin >> t1.hours;
    cout << "Time 1 - minutes: ";
    cin >> t1.minutes;
    cout << "Time 1 - seconds: ";
    cin >> t1.seconds;

    cout << "Time 2 - hours: ";
    cin >> t2.hours;
    cout << "Time 2 - minutes: ";
    cin >> t2.minutes;
    cout << "Time 2 - seconds: ";
    cin >> t2.seconds;

    int diff = toSeconds(t2) - toSeconds(t1);

    cout << "Difference: " << diff << " seconds" << endl;

    return 0;
}