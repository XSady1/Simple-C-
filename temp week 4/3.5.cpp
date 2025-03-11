#include <iostream>
#include <string>
#include <iomanip>

/*
Please ignore the code i know we didnt learn it
i was just really bored.
*/

using namespace std;

int main() {

	int today, future, gone;
	string temp;

	cout << setw(24) << "Please enter today's day: \n";

	cout << setw(24) << "Sunday | 0" << endl;
	cout << setw(24) << "Monday | 1" << endl;
	cout << setw(24) << "Tuesday | 2" << endl;
	cout << setw(24) << "Wednesday | 3" << endl;
	cout << setw(24) << "Thursday | 4" << endl;
	cout << setw(24) << "Friday | 5" << endl;
	cout << setw(24) << "Saturday | 6" << endl;
	

	cin >> today;

	if (today < 0 || today > 6) {
		cout << "Error: invalid today's day. Values of 0-6 accepted only.\n";
		return 0;
	}

	cout << "Enter the number of days elapsed since today:\n";

	cin >> gone;

	future = (today + gone) % 7;

	if ( today == 0) {
		temp = "Sunday";
	}
	else if (today == 1) {
		temp = "Monday";
	}
	else if (today == 2) {
		temp = "Tuesday";
	}
	else if (today == 3) {
		temp = "Wednesday";
	}
	else if (today == 4) {
		temp = "Thursday";
	}
	else if (today == 5) {
		temp = "Friday";
	}
	else{
		temp = "Saturday";
	}

	switch (future) {

	case 0:
		cout << "Today is " << temp << " and the future day is " << "Sunday";
		break;
	case 1:
		cout << "Today is " << temp << " and the future day is " << "Monday";
		break;
	case 2:
		cout << "Today is " << temp << " and the future day is " << "Tuesday";
		break;
	case 3:
		cout << "Today is " << temp << " and the future day is " << "Wednesday";
		break;
	case 4:
		cout << "Today is " << temp << " and the future day is " << "Thursday";
		break;
	case 5:
		cout << "Today is " << temp << " and the future day is " << "Friday";
		break;
	case 6:
		cout << "Today is " << temp << " and the future day is " << "Saturday";
		break;
	default:
		cout << "Error: invalid today's day. Values of 0-6 accepted only.\n";
		break;
	}
	

	return 0;
}