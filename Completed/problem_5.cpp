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
// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

bool divisible(int x) {
    for (int i = 1; i <= 20; ++i) {
        if (x % i != 0) {return false;}
    }
    return true;
}

int main() {
    int curr = 2520;
    while (!divisible(curr)) {
        curr++;
    }
    cout << curr << endl;
}