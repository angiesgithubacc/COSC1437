#include <iostream>
using namespace std;

unsigned long long factorial(unsigned int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    unsigned int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    cout << "Factorial of " << number << " = " << factorial(number);
    return 0;
}

