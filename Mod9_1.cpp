#include <iostream>

void discount() {
    std::cout << "You are pre-registered and qualify for a 5% discount." << std::endl;
}

void noDiscount() {
    std::cout << "Sorry, you did not pre-register and do not qualify for a 5% discount." << std::endl;
}

int main() {
    char choice;
    std::cout << "Have you preregistered for art show tickets? (Y/N): ";
    std::cin >> choice;

    if (choice == 'Y' || choice == 'y') {
        discount();
    } else {
        noDiscount();
    }

    return 0;
}
