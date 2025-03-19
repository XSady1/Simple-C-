#include <iostream>

using namespace std;

int main() {
    int e1, e2, e3;

    cin >> e1 >> e2 >> e3;

    if (e1 == e2 && e2 == e3) {

        cout << "Equilateral Triangle" << endl;
    }
    else if (e1 == e2 || e1 == e3 || e2 == e3) {

        cout << "Isosceles Triangle" << endl;
    }
    else {

        cout << "Scalene Triangle" << endl;
    }

    return 0;
}
