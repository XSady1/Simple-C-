#include <iostream>
using namespace std;

int main()
{
    double mm_in = 0.039, in_mm = 25.641;

    cout << "Millimeters   Inches   |   Inches   Millimeters" << endl;
    for (int mm = 2, in = 1; mm <= 100 && in <= 50; mm += 2, in++) {
        cout << mm << "            " << mm * mm_in << "   |   " << in << "        " << in * in_mm << endl;
    }

    return 0;
}