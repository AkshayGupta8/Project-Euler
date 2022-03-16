#include <limits.h>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

// Problem Description:
// In the 20×20 grid below, four numbers along a diagonal line have been marked in red.
// The product of these numbers is 26 × 63 × 78 × 14 = 1788696.
// What is the greatest product of four adjacent numbers in the same direction (up, down, left, right, or diagonally) in the 20×20 grid?

vector<vector<int>> matrix;;

int right(int row, int col) {
    // check row and col are valid
    // [0, 1, 2, 3, ..., 14, 15, 16, 17, 18, 19]
    if (col >= 17) {
        return -1;
    }
    return matrix[row][col] * matrix[row][col + 1] * matrix[row][col + 2] * matrix[row][col + 3];
}

int down(int row, int col) {
    // check row and col are valid
    // [0, 1, 2, 3, ..., 14, 15, 16, 17, 18, 19]
    if (row >= 17) {
        return -1;
    }
    return matrix[row][col] * matrix[row + 1][col] * matrix[row + 2][col] * matrix[row + 3][col];
    return 1;
}

int right_diagonal(int row, int col) {
    if (row >= 17 || col >= 17) {
        return -1;
    }
    return matrix[row][col] * matrix[row + 1][col + 1] * matrix[row + 2][col + 2] * matrix[row + 3][col + 3];
}

int left_diagonal(int row, int col) {
    if (row >= 17 || col < 3) {
        return -1;
    }
    return matrix[row][col] * matrix[row + 1][col - 1] * matrix[row + 2][col - 2] * matrix[row + 3][col - 3];
}

int main() {
    int reader;
    matrix.resize(20, vector<int>(20));

    int row = 0;
    int col = 0;
    while (cin >> reader) {
        matrix[row][col] = reader;
        col++;
        if (col > 19) {
            col = 0;
            row += 1;
        }
        if (row > 19) {
            break;
        }
    }

    // DEBUG:
    // for (vector<int> vec : matrix) {
    //     for (int i : vec) {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    int max = -1;
    for (int row = 0; row < 20; ++row) {
        for (int col = 0; col < 20; ++col) {
            if (max < right(row, col)) {
                max = right(row, col);
            }
            if (max < down(row, col)) {
                max = down(row, col);
            }
            if (max < right_diagonal(row, col)) {
                max = right_diagonal(row, col);
            }
            if (max < left_diagonal(row, col)) {
                max = left_diagonal(row, col);
            }
        }
    }

    cout << max << endl;
}