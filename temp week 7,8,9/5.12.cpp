#include <iostream>
using namespace std;

int main() {
    int count = 0;

    for (int i = 1; i <= 500; ++i) {
        if (i % 3 == 0 && i % 4 == 0) {
            cout << i << " ";
            count++;

            if (count % 5 == 0) {
                cout << endl; 
            }
        }
    }

    if (count % 5 != 0) {
        cout << endl; 
    }

    return 0;
}