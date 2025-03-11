#include <iostream>
using namespace std;

int main() {
    double kgs = 6.0;
    double hrs = (15 + 30 + 0.5) / 60;
    double grams = kgs * 1000;
    double avg = grams / hrs;

    cout << "Average sales: " << avg << " grams/hour" << endl;

    return 0;
}
