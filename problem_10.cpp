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
// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// Find the sum of all the primes below two million.

// takes advantage of the fact that the there is no prime
// factor > sqrt(n)
bool isPrime(int n) {
    if (n == 1) {
        return false;
    }

    int i = 2;
    while (i*i <= n) {
        if (n % i == 0) {
            return false;
        }
        i += 1;
    }
    return true;
}

int main() {
    long long int result = 2;
    for (int i = 3; i < 2000000; i += 2) {
        if (isPrime(i)) {
            result += i;
        }
    }
    cout << result << endl;
}