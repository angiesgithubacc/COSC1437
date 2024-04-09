#include <iostream>
#include <vector>

bool findElement(const std::vector<int>& numbers, int target, int index) {
    if (index >= numbers.size()) {
        return false;
    }
    if (numbers[index] == target) {
        return true;
    }
    return findElement(numbers, target, index + 1);
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int target = 3;

    if (findElement(numbers, target, 0)) {
        std::cout << "Target found in the vector." << std::endl;
    } else {
        std::cout << "Target not found in the vector." << std::endl;
    }

    return 0;
}

