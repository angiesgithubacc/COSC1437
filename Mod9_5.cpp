#include <iostream>

void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int arr[5];

    std::cout << "Enter #1: ";
    std::cin >> arr[0];
    std::cout << "Enter #2: ";
    std::cin >> arr[1];
    std::cout << "Enter #3: ";
    std::cin >> arr[2];
    std::cout << "Enter #4: ";
    std::cin >> arr[3];
    std::cout << "Enter #5: ";
    std::cin >> arr[4];

    std::cout << "Original contents of array:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << std::endl;
    }

    reverseArray(arr, 5);

    std::cout << "Reversed contents of array:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}

