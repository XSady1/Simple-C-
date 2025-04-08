#include <iostream>
using namespace std;

int main()
{
    double conversion = 0.039;

    cout << "Millimeters   Inches" << endl;
    for (int mm = 2; mm <= 100; mm += 2)
    {
        double inches = mm * conversion;
        cout << mm << "            " << (int)(inches * 1000) / 1000.0 << endl;
    }

    return 0;
}