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
// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?onsidering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

int main() {
    long long int limit = 600851475143;
    long long int max = 1;
    for (long long int i = 2; i <= limit; ++i) {
        if (limit % i == 0 && i != 600851475143) {
            limit = limit / i;
            if (max < i) {
                max = i;
            }
            i = 2;
        }
    }
    cout << max << endl;
}