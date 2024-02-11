#include <iostream>

int main() {
    int i = 0;
    
    while (i <= 10) {
        std::cout << "Number: " << i << std::endl;
        std::cout << "Multiplied by 2: " << i * 2 << std::endl;
        std::cout << "Multiplied by 10: " << i * 10 << std::endl;
        std::cout << std::endl;
        
        i++;
    }
    
    return 0;
}
