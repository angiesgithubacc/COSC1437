#include <iostream>

int main() {
    int rating;
    int totalRatings = 0;
    int numSongs = 0;

    std::cout << "Welcome to the Top Songs Rating Program!" << std::endl;
    std::cout << "Please rate the top songs of the week from 0 to 4 stars." << std::endl;
    std::cout << "Enter a negative number to quit." << std::endl;

    while (true) {
        std::cout << "Enter your rating: ";
        std::cin >> rating;

        if (rating < 0) {
            break;
        }

        if (rating >= 0 && rating <= 4) {
            totalRatings += rating;
            numSongs++;
        } else {
            std::cout << "Invalid rating. Please enter a number from 0 to 4." << std::endl;
        }
    }

    if (numSongs > 0) {
        double averageRating = static_cast<double>(totalRatings) / numSongs;
        std::cout << "Thank you for rating the songs!" << std::endl;
        std::cout << "The average star rating for the songs is: " << averageRating << std::endl;
    } else {
        std::cout << "No ratings provided. Exiting the program." << std::endl;
    }

    return 0;
}
