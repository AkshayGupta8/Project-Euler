#include <limits.h>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

// Problem Description:
// Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
// How many such routes are there through a 20×20 grid?

int main () {
    vector<vector<long long>> matrix;
    matrix.resize(21, vector<long long>(21));

    for (size_t i = 0; i < matrix.size(); ++i) {
        matrix[0][i] = 1;
        matrix[i][0] = 1;
    }

    for (size_t row = 1; row < matrix.size(); ++row) {
        for (size_t col = 1; col < matrix.size(); ++col) {
            matrix[row][col] = matrix[row - 1][col] + matrix[row][col - 1];
        }
    }

    cout << matrix.back().back() << endl;
}