#include <iostream>
using namespace std;

int main() {
    double sub, rate;

    cout << "Enter the subtotal and a gratuity rate: ";
    cin >> sub >> rate;

    double tip = sub * (rate / 100);
    double total = sub + tip;

    cout << "The gratuity is $" << tip << " and total is $" << total << endl;

    return 0;
}
