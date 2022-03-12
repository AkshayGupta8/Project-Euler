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

// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

// Find the sum of all the multiples of 3 or 5 below 1000.

int main() {
    int sum = 0;
    for (int i = 1; i < 1000; ++i) { // iterate through all of the natural below 1000
        if (i % 3 == 0 or i % 5 == 0) { // i is a multiple of 3 or 5
            sum += i;
        }
    }
    cout << sum << endl; // output the solution
}