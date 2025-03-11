#include <iostream>
using namespace std;

int main() {
    double r, l, a, v;
    double pi = 3.14;

    cout << "Enter the radius and length of a cylinder: ";
    cin >> r >> l;

    a = r * r * pi;
    v = a * l;

    cout << "The area is " << a << endl;
    cout << "The volume is " << v << endl;

    return 0;
}
