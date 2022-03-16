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
// The sum of the squares of the first ten natural numbers is, 385
// The square of the sum of the first ten natural numbers is, 55^2 = 3025
// Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.
// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.


int main() {
    long long int sumOfSquares = 0;
    long long int squareOfSum = 0;
    
    for (int i = 1; i <= 100; ++i) {
        sumOfSquares += i * i;
        squareOfSum += i;
    }
    squareOfSum *= squareOfSum;

    cout << squareOfSum - sumOfSquares << endl;
}