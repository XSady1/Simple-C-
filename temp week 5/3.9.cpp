#include <iostream>

using namespace std;

int main() {
    int day, hours;

    cin >> day >> hours;

    if (day < 1 || day > 7 || hours < 0 || hours >= 24) {
        cout << "error" << endl;
    }
    else {
        cout << "Today is ";
        if (day == 1) cout << "Sunday";
        else if (day == 2) cout << "Monday";
        else if (day == 3) cout << "Tuesday";
        else if (day == 4) cout << "Wednesday";
        else if (day == 5) cout << "Thursday";
        else if (day == 6) cout << "Friday";
        else cout << "Saturday";

        cout << endl << "Remaining Hours: " << 24 - hours << endl;
    }

    return 0;
}
