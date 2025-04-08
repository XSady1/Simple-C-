#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int correct = 0;
    int total = 0;
    long start = time(0);
    const int Q_COUNT = 9;

    srand(time(0));

    while (total < Q_COUNT)
    {
        int a = rand() % 5 + 1;
        int b = rand() % 5 + 1;
        int c = rand() % 5 + 1;

        cout << "What is " << a << " * " << b << " * " << c << "? ";
        int ans;
        cin >> ans;

        if (a * b * c == ans)
        {
            cout << "You are correct!\n";
            correct++;
        }
        else
        {
            cout << "Wrong. " << a << " * " << b << " * " << c << " = " << (a * b * c) << endl;
        }

        total++;
    }

    long end = time(0);
    cout << "Correct count is " << correct << "\nTest time is " << end - start << " seconds\n";

    return 0;
}