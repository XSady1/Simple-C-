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

int main() {
    int num1, num2, num3, num4;
    
cout << "Enter 4 numbers: ";

cin >> num1 >> num2 >> num3 >> num4;



long long smallest, largest, middle1 = -1, middle2 = -1; // long long because i want any number to work

        smallest = FindMin(FindMin(num1, FindMin(num2, num3)), num4); // find min num among 4 nums
        largest  = FindMax(FindMax(num1, FindMax(num2, num3)), num4); // find max num among 4 nums
 
 
 
  
    if (num1 != smallest && num1 != largest) { // num1 not smallest or largest
        if (middle1 == -1)                     // is mid1 assigned?
            middle1 = num1;                    // assign mid1
        else
            middle2 = num1;                    // otherwise assign to mid2
    }
    
    
    
    if (num2 != smallest && num2 != largest) { // num2 not smallest or largest
        if (middle1 == -1)                     
            middle1 = num2;                    
        else
            middle2 = num2;                    
    }
    
    if (num3 != smallest && num3 != largest) { // num3 not smallest or largest
        if (middle1 == -1)       
            middle1 = num3;      
        else
            middle2 = num3;      
    }
    
    if (num4 != smallest && num4 != largest) { // num4 not smallest or largest
        if (middle1 == -1)       
            middle1 = num4;     
        else
            middle2 = num4;      
    }
    
     if (middle1 == -1 || middle2 == -1) // if no middle found ex.: 6 6 6 6 // during testing if numbers are the same an error could ocour 
            cout << "There are no two middle numbers." << endl;
            
else if (middle1 < middle2)

    cout << "The middle numbers are " << middle1 << " and " << middle2 << endl;
else
    cout << "The middle numbers are " << middle2 << " and " << middle1 << endl;

    return 0; 
}
    