#include <iostream>
using namespace std;

int main() {
    double m, t1, t2, q;

    cout << "Enter the amount of water in kilograms: ";
    cin >> m;

    cout << "Enter the initial temperature: ";
    cin >> t1;

    cout << "Enter the final temperature: ";
    cin >> t2;

    q = m * (t2 - t1) * 4184;

    cout << "The energy needed is " << q << " joules." << endl;

    return 0;
}
