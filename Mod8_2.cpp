#include <iostream>
#include <string>

const int MAX_STUDENTS = 20;

int main() {
    std::string names[MAX_STUDENTS];
    int ages[MAX_STUDENTS];
    char grades[MAX_STUDENTS];

    int numStudents;
    do {
        std::cout << "Enter the number of students (max 20): ";
        std::cin >> numStudents;
    } while (numStudents <= 0 || numStudents > MAX_STUDENTS);

    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Enter name for student " << i + 1 << ": ";
        std::cin >> names[i];

        do {
            std::cout << "Enter age for student " << i + 1 << ": ";
            std::cin >> ages[i];
        } while (ages[i] <= 0);

        do {
            std::cout << "Enter grade for student " << i + 1 << " (A, B, C, D, F): ";
            std::cin >> grades[i];
        } while (grades[i] != 'A' && grades[i] != 'B' && grades[i] != 'C' && grades[i] != 'D' && grades[i] != 'F');
    }

    return 0;
}
