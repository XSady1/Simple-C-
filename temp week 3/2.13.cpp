#include <iostream>
using namespace std;

int main() {
    double save, rate = 0.00417, value = 0;

    cout << "Enter the monthly saving amount: ";
    cin >> save;

    double month1 = (value + save) * (1 + rate);
    double month2 = (month1 + save) * (1 + rate);
    double month3 = (month2 + save) * (1 + rate);
    double month4 = (month3 + save) * (1 + rate);
    double month5 = (month4 + save) * (1 + rate);
    double month6 = (month5 + save) * (1 + rate);
    value = month6;

    cout << "After the sixth month, the account value is $" << value << endl;

    return 0;
}
