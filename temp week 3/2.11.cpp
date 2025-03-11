#include <iostream>
using namespace std;

int main() {
    int pop = 312032486;
    int secs = 365 * 24 * 60 * 60;
    int births = secs / 7;
    int deaths = secs / 13;
    int immigs = secs / 45;

    int yrs;
    cout << "Enter the number of years: ";
    cin >> yrs;

    int futurePop = pop + yrs * (births - deaths + immigs);

    cout << "The population in " << yrs << " years is " << futurePop << endl;

    return 0;
}
