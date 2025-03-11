#include <iostream>
using namespace std;

int main() {
    int pop = 312032486;
    int secs = 365 * 24 * 60 * 60;

    int births = secs / 7;
    int deaths = secs / 13;
    int immigrants = secs / 45;

    int popYear1 = pop + births + immigrants - deaths;
    int popYear2 = popYear1 + births + immigrants - deaths;
    int popYear3 = popYear2 + births + immigrants - deaths;
    int popYear4 = popYear3 + births + immigrants - deaths;
    int popYear5 = popYear4 + births + immigrants - deaths;

    cout << "Year 1: " << popYear1 << endl;
    cout << "Year 2: " << popYear2 << endl;
    cout << "Year 3: " << popYear3 << endl;
    cout << "Year 4: " << popYear4 << endl;
    cout << "Year 5: " << popYear5 << endl;

    return 0;
}
