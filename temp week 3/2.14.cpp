#include <iostream>
using namespace std;

int main() {
    double weight, height, kg, meters, bmi;

    cout << "Enter weight in pounds: ";
    cin >> weight;

    cout << "Enter height in inches: ";
    cin >> height;

    kg = weight * 0.45359237;
    meters = height * 0.0254;

    bmi = kg / (meters * meters);

    cout << "BMI is " << bmi << endl;

    return 0;
}
