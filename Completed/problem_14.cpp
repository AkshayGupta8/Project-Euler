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
// The following iterative sequence is defined for the set of positive integers:

// n → n/2 (n is even)
// n → 3n + 1 (n is odd)

// Using the rule above and starting with 13, we generate the following sequence:

// 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
// It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

// Which starting number, under one million, produces the longest chain?

// NOTE: Once the chain starts the terms are allowed to go above one million.


long long int Sequence(long long int x, long long int count) {
    if (x == 1) {
        return count;
    }
    else if (x % 2 == 0) {
        return Sequence(x / 2, count + 1);
    } else {
        return Sequence(3 * x + 1, count + 1);
    }
}

int main() {
    long long int max = 0;
    long long int maxVal = 0;
    int limit = 1000000;
    int curr;
    for (int i = 1; i < limit; ++i) {
        curr = Sequence(i, 1);
        if (max < curr) {
            max = curr;
            maxVal = i;
        }
    }
    cout << max << endl;
    cout << maxVal << endl;
}

