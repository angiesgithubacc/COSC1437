#include <iostream>
using namespace std;

int main() {
    int num1 = -50;
    int num2 = 53;
    int num3 = 78;

    int smallest = num1;
    int largest = num3;

    if (num2 > largest) {
        largest = num3;
    }

    if (num3 > largest) {
        largest = num3;
    }

    if (num2 < smallest) {
        smallest = num2;
    }

    if (num3 < smallest) {
        smallest = num3;
    }

    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;

    return 0;
}
