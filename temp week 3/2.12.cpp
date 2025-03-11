#include <iostream>
using namespace std;

int main() {
    double v, a, length;

    cout << "Enter speed and acceleration: ";
    cin >> v >> a;

    length = (v * v) / (2 * a);

    cout << "The minimum runway length for this airplane is " << length << endl;

    return 0;
}
