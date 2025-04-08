#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "How many items do you have? ";
    cin >> n;

    string minName;
    double minPrice = 1000000000.0; 

    for (int i = 0; i < n; ++i) {
        string name;
        double price;

        cout << "Enter the name of item " << i + 1 << ": ";
        cin >> name;

        cout << "Enter the price of " << name << ": ";
        cin >> price;

        if (price < minPrice) {
            minPrice = price;
            minName = name;
        }
    }

    cout << "The item with the lowest price is: " << minName << " with a price of " << minPrice << endl;
        

    return 0;
}