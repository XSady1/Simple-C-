#include <iostream>
using namespace std;

int main() {
    double pounds;

    cout << "Enter a number in pounds: ";
    cin >> pounds;

    double kilograms = pounds * 0.454;

    cout << pounds << " pounds is " << kilograms << " kilograms" << endl;

    return 0;
}
