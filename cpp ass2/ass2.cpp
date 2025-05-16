/*
Sasha Fard - Computer Sciense UNIC

Write a program to prompt the user to enter four numbers and by using if-statements, 
find and display the two middle numbers (i.e. not the largest and not the smallest). 
The two middle numbers should be displayed in ascending order.

You are NOT ALLOWED to use LOOPS.
You are NOT ALLOWED to use any predefined functions – use ONLY functions that YOU wrote.
DO NOT use any arrays in this program.

*/



#include <iostream>

using namespace std;

long long FindMin(long long a, long long b) { // fx to find min num among 2 nums // long long because i want any number to work
    if (a < b)
        return a;
    else
        return b;
}

long long FindMax(long long a, long long b) { // fx to find max num among 2 nums // long long because i want any number to work
    if (a > b)
        return a;
    else
        return b;
}

void AssignMiddle(long long value, long long smallest, long long largest, long long& middle1, long long& middle2) { // long long because i want any number to work
    if (value != smallest && value != largest) {								    // value not smallest or largest
        if (middle1 == -1)											                // if mid1 unassigned
            middle1 = value;											            // assign value to mid1
        else
            middle2 = value;											           // if mid1 is taken assign mid2
    }
}

int main() {
    int num1, num2, num3, num4;
    
cout << "Enter 4 numbers: ";

cin >> num1 >> num2 >> num3 >> num4;

long long smallest, largest, middle1 = -1, middle2 = -1; // long long because i want any number to work

        smallest = FindMin(FindMin(num1, FindMin(num2, num3)), num4); // find min num among 4 nums
        largest  = FindMax(FindMax(num1, FindMax(num2, num3)), num4); // find max num among 4 nums
 
	AssignMiddle(num1, smallest, largest, middle1, middle2);
	AssignMiddle(num2, smallest, largest, middle1, middle2);
	AssignMiddle(num3, smallest, largest, middle1, middle2);
	AssignMiddle(num4, smallest, largest, middle1, middle2);
 
     if (middle1 == -1 || middle2 == -1) // if no middle found ex.: 6 6 6 6 // during testing if numbers are the same an error could ocour 
            cout << "There are no two middle numbers." << endl;
            
else if (middle1 < middle2)

    cout << "The middle numbers are " << middle1 << " and " << middle2 << endl;
else
    cout << "The middle numbers are " << middle2 << " and " << middle1 << endl;

    return 0; 
}
    
