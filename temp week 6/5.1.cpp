#include <iostream>

using namespace std;

int main() {

	int poscount = 0, negcount = 0, total = 0, avg = 0, input = 1, inputcount = 0;

	cout << "Enter an integer, the input ends if it is 0:\n";

	while (input != 0) {
		cin >> input;
		if (input < 0) {
			negcount++;
		}
		else if (input > 0) {
			poscount++;
		}
		total += input;
		inputcount++;

	}
	avg = total / inputcount;
	if (total != 0) {
		cout << "The number of positives is " << poscount << endl;
		cout << "The number of negatives is " << negcount << endl;
		cout << "The total is " << total << endl;
		cout << "The average is 1.25 \n" << avg;
	}
	else {
		cout << "No numbers were entered except 0";
	}

	return 0;
}