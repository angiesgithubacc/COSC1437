#include <iostream>
#include <vector>

void reverseVector(std::vector<int>& numbers, int start, int end) {
    if (start >= end) {
        return;
    }
    
    int temp = numbers[start];
    numbers[start] = numbers[end];
    numbers[end] = temp;
    
    reverseVector(numbers, start + 1, end - 1);
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    std::cout << "Original Vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    
    reverseVector(numbers, 0, numbers.size() - 1);
    
    std::cout << "\nReversed Vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    
    return 0;
}
