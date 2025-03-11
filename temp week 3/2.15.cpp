#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2, dist;

    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;

    cout << "Enter x2 and y2: ";
    cin >> x2 >> y2;

    dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    cout << "The distance between the two points is " << dist << endl;

    return 0;
}
