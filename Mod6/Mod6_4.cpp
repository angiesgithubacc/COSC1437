#include <iostream>
#include <string>

int main() {
    std::string employeeName = "John Doe";
    double annualSalary = 50000.0;
    int performanceRating = 3;
    double bonus = 0.0;

    switch (performanceRating) {
        case 1:
            bonus = annualSalary * 0.25;
            break;
        case 2:
            bonus = annualSalary * 0.15;
            break;
        case 3:
            bonus = annualSalary * 0.10;
            break;
        case 4:
            bonus = 0.0;
            break;
    }

    std::cout << "Employee Name: " << employeeName << std::endl;
    std::cout << "Yearly Salary: $" << annualSalary << std::endl;
    std::cout << "Performance Rating: " << performanceRating << std::endl;
    std::cout << "Bonus: $" << bonus << std::endl;

    return 0;
}
