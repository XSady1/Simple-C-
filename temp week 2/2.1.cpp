#include <iostream>
using namespace std;

int main() {
    double c;
    cout << "Enter a degree in Celsius: ";
    cin >> c;

    double f = (9.0 / 5) * c + 32;
    cout << c << " Celsius is " << f << " Fahrenheit" << endl;

    return 0;
}
