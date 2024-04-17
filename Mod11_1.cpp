#include <iostream>
#include <vector>

int vectorSum(const std::vector<int>& numbers) {
    if (numbers.empty()) {
        return 0;
    } else {
        return numbers.back() + vectorSum(std::vector<int>(numbers.begin(), numbers.end() - 1));
    }
}

int main() {
    std::vector<int> myVector = {1, 2, 3, 4, 5};
    int sum = vectorSum(myVector);
    std::cout << "Sum of the vector elements: " << sum << std::endl;

    return 0;
}

// bye

