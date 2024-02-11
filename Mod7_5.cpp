#include <iostream>

int main() {
    for (int row = 1; row <= 5; row++) {
        for (int col = 1; col <= 3; col++) {
            if (row == 1 || row == 3 || row == 5) {
                std::cout << "*";
            } else if (col == 1) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    
    return 0;
}
