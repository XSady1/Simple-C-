#include <iostream>

using namespace std;

int main() {

	double a, b, c, d, e, f, x = 0, y = 0;

	cout << "Enter a, b, c, d, e, f:\n";

	cin >> a >> b >> c >> d >> e >> f;

	x = (e * d - b * f) / (a * d - b * c);
	y = (a * f - e * c) / (a * d - b * c);
	
	if ((a * d) - (b * c) == 0) {
		cout << "The Equation has no solution\n";
	}
	else {
		cout << "x is: " << x << " and y is: " << y;

	}

	return 0;
}
