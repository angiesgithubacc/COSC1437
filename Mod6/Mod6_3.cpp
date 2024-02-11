#include <iostream>
#include <string>

using namespace std;

int main() {
    string employeeName;
    double transactionsValue;
    int numTransactions;
    int numShifts;

    cout << "Enter employee name: ";
    getline(cin, employeeName);

    cout << "Enter transactions dollar value: ";
    cin >> transactionsValue;

    cout << "Enter number of transactions: ";
    cin >> numTransactions;

    cout << "Enter number of shifts worked: ";
    cin >> numShifts;

    double productivityScore = (transactionsValue / numTransactions) / numShifts;
    int bonus = 0;

    if (productivityScore <= 30) {
        bonus = 50;
    } else if (productivityScore >= 31 && productivityScore <= 69) {
        bonus = 75;
    } else if (productivityScore >= 70 && productivityScore <= 199) {
        bonus = 100;
    } else if (productivityScore >= 200) {
        bonus = 200;
    }

    cout << "Employee Name: " << employeeName << endl;
    cout << "Bonus: $" << bonus << endl;

    return 0;
}
