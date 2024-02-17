#include <iostream>
#include <vector>
#include <string>

const int rows = 5;
const int columns = 5;

using namespace std;

void printChart(vector<vector<string>> &chart) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << chart[i][j] << " ";
        }
        cout << endl;
    }
}

void assignSeat(vector<vector<string>> &chart, string studentName, int row, int col) {
    if (row >= 0 && row < rows && col >= 0 && col < columns) {
        if (chart[row][col] == "-") {
            chart[row][col] = studentName;
        } else {
            cout << "Seat is already occupied. Please choose another seat." << endl;
        }
    } else {
        cout << "Invalid row or column. Please select a valid seat." << endl;
    }
}

pair<int, int> findEmptySeat(vector<vector<string>> &chart) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (chart[i][j] == "-") {
                return make_pair(i, j);
            }
        }
    }
    return make_pair(-1, -1);
}

int countEmptySeats(vector<vector<string>> &chart) {
    int count = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (chart[i][j] == "-") {
                count++;
            }
        }
    }
    return count;
}

int main() {
    vector<vector<string>> seatingChart(rows, vector<string>(columns, "-"));

    // Example Usage
    assignSeat(seatingChart, "Alice", 1, 1);
    assignSeat(seatingChart, "Bob", 2, 2);

    printChart(seatingChart);

    auto emptySeat = findEmptySeat(seatingChart);
    cout << "First empty seat found at row: " << emptySeat.first << ", column: " << emptySeat.second << endl;

    int emptySeatsCount = countEmptySeats(seatingChart);
    cout << "Number of empty seats: " << emptySeatsCount << endl;

    return 0;
}
