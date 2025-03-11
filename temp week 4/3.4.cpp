#include <iostream>

using namespace std;

int main() {
	int speed;

	cout << "Enter speed:\n";

	cin >> speed;

	if (speed < 20) {
		cout << "Too Slow!\n";
	}
	else if (speed > 80) {
		cout << "Too Fast!\n";
	}
	else {
		cout << "Just Right!\n";
	}


	return 0;
}
