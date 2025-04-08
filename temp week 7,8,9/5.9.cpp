#include<iostream>

using namespace std;

int main() {
	float rent = 1000;
	for (int i = 0; i <= 5; i++) {
		cout << "annual rent cost for year " << i << " is: " << rent << endl;
		rent = rent + (rent * 0.03);
	}
	return 0;
}