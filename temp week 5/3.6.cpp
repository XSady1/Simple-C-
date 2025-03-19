#include <iostream>
using namespace std;

int main() {
    double weight, height;
    int feet, inches;
    cout << "Enter weight:\n";

    cin >> weight;

    cout << "Enter feet\n";

    cin >> feet;

    cout << "Enter inches\n";

    cin >> inches;

    height = (feet * 12 + inches) * 0.0254;
    weight *= 0.453592;
    double bmi = weight / (height * height);

    cout << bmi << endl;

    if (bmi < 18.5) cout << "Underweight" << endl;
    else if (bmi < 25) cout << "Normal" << endl;
    else if (bmi < 30) cout << "Overweight" << endl;
    else cout << "Obese" << endl;

    return 0;
}
