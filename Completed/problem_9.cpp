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
// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
// a2 + b2 = c2
// For example, 32 + 42 = 9 + 16 = 25 = 52.
// There exists exactly one Pythagorean triplet for which a + b + c = 1000.
// Find the product abc.

bool pyTrip(int a, int b, int c) {
    return a * a + b * b == c * c;
}

int main() {
    for (int a = 1; a < 1000; ++a) {
        for (int b = 1; b < 1000; ++b) {
            for (int c = 1; c < 1000; ++c) {
                if (a + b + c == 1000 && pyTrip(a, b, c)) {
                    cout << a * b * c << endl;
                    return 0;
                }
            }
        }
    }
}