#include <iostream>
using namespace std;

int main() {
    double side = 9.2;
    double area = 1.732 * (side * side) / 4;
    double perimeter = 3 * side;

    cout << "For an equilateral triangle with a side length of " << side << ":" << endl;
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;

    return 0;
}
