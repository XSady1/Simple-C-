#include <iostream>
using namespace std;

int main()
{
    double conv = 3.280;

    cout << "Meters   Feet" << endl;
    for (int m = 1; m <= 15; m++) {
        double ft = m * conv;
        cout << m << "        " << ft << endl;
    }

    return 0;
}