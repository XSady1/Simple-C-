#include <iostream>
using namespace std;

int main()
{
    double m_ft = 3.280, ft_m = 0.3048;

    cout << "Meters   Feet   |   Feet   Meters" << endl;
    for (int m = 1, ft = 3; m <= 15 && ft <= 45; m++, ft += 3) {
        cout << m << "       " << m * m_ft;
        cout << "   |   " << ft << "       " << ft * ft_m << endl;
    }

    return 0;
}