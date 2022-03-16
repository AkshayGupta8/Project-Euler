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
// The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:
// 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
// Let us list the factors of the first seven triangle numbers:
//  1: 1
//  3: 1,3
//  6: 1,2,3,6
// 10: 1,2,5,10
// 15: 1,3,5,15
// 21: 1,3,7,21
// 28: 1,2,4,7,14,28
// We can see that 28 is the first triangle number to have over five divisors.
// What is the value of the first triangle number to have over five hundred divisors?


int divisorCount(int num) {
    int divisorCount = 1; // the number itself;

    for (int i = 1; i < num / 2 + 3; ++i) {
        if (num % i == 0) {
            ++divisorCount;
        }
    }

    return divisorCount;
}

int main() {
    int currNat = 1;
    int currTri = 1;

    while (divisorCount(currTri) <= 500) {
        for (int i = 1; i <= 200; ++i) {
            currNat += 1;
            currTri += currNat;
        }
    }

    cout << currTri << endl;
}

