#include <iostream>

using namespace std;

int main() {

	int a, b;

	cout << "Enter two integers:\n";

	cin >> a >> b;

	if (a % b == 0) {
		cout << a << " is divisible by " << b;
	}

	else
		cout << a << " is not divisible by " << b;



	return 0;
}