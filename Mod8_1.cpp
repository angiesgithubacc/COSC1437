#include <iostream>

int main() {
    double averages[8];
    double sum = 0;
    
    for (int i = 0; i < 8; ++i) {
        std::cout << "Enter a batting average: ";
        std::cin >> averages[i];
        sum += averages[i];
    }

    double min = averages[0];
    double max = averages[0];

    for (int i = 1; i < 8; ++i) {
        if (averages[i] < min) {
            min = averages[i];
        }
        if (averages[i] > max) {
            max = averages[i];
        }
    }

    double average = sum / 8;

    std::cout << "Minimum batting average is " << min << std::endl;
    std::cout << "Maximum batting average is " << max << std::endl;
    std::cout << "Average batting average is " << average << std::endl;

    return 0;
}