//6.5
int main() {
    return 0;
}

//6.6
void example() {
    std::cout << "Hello" << std::endl;
    return;  // Allowed
}

void p(double x, double y) {
    std::cout << x << " " << y << std::endl;
}

//6.7
int add(int a, int b) // Function signature: `int add(int, int)`
{
    return a + b; // `a` and `b` are parameters
}

int result = add(5, 3); // `5` and `3` are arguments


//6.8
double getCommission(double salesAmount, double commissionRate);
void displayCalendar(int month, int year);
double getSquareRoot(double number);
bool isEven(int number);
void showMessage(std::string message, int times);
double getMonthlyPayment(double loanAmount, int years, double annualRate);
char toUppercase(char lowercaseLetter);

//6.9
int function1(int n) {
    std::cout << n;
    return n; // Fixed
}

void function2(int n, int m) { // Added `int` before `m`
    n += m;
    function1(static_cast<int>(3.4)); // Convert `3.4` to `int`
}






