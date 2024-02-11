#include <iostream>

int main() {
    char input;
    int leftHandedCount = 0;
    int rightHandedCount = 0;

    while (true) {
        std::cout << "Enter L for left-handed or R for right-handed (X to exit): ";
        std::cin >> input;

        if (input == 'L') {
            leftHandedCount++;
        } else if (input == 'R') {
            rightHandedCount++;
        } else if (input == 'X') {
            break;
        }
    }

    std::cout << "Number of left-handed people: " << leftHandedCount << std::endl;
    std::cout << "Number of right-handed people: " << rightHandedCount << std::endl;

    return 0;
}
