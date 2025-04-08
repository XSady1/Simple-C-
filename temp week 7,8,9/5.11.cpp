#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "How many items do you have? ";
    cin >> n;

    string name, minName, secMinName;
    double price, min = 1000000000.0, secMin = 1000000000.0;

    for (int i = 0; i < n; ++i) {
        cout << "Enter the name of item " << i + 1 << ": ";
        cin >> name;

        cout << "Enter the price of " << name << ": ";
        cin >> price;

        if (price < min) {
            secMin = min;
            secMinName = minName;
            min = price;
            minName = name;
        }
        else if (price < secMin) {
            secMin = price;
            secMinName = name;
        }
    }

    cout << "The item with the lowest price is: " << minName
        << " with a price of " << min << endl;

    cout << "The item with the second-lowest price is: " << secMinName
        << " with a price of " << secMin << endl;

    return 0;
}