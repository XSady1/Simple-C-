#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, r1, r2;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    d = b * b - 4 * a * c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        cout << "The roots are " << r1 << " and " << r2 << endl;
    }
    else if (d == 0) {
        r1 = -b / (2 * a);
        cout << "The root is " << r1 << endl;
    }
    else {
        cout << "The equation has no real roots" << endl;
    }

    return 0;
}
