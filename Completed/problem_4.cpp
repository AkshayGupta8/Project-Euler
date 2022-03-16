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
// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.

bool isPalindrome(int x) {
    string str = to_string(x);
    int length = str.size();
    bool even = length % 2 == 0;

    stack<char> check;

    for (int i = 0; i < length / 2; ++i) {
        check.push(str[i]);
    }

    if (even) {
        for (int i = length / 2; i < length; ++i) {
            if (check.top() != str[i]) {
                return false;
            }
            check.pop();
        }
    } else {
        for (int i = length / 2 + 1; i < length; ++i) {
            if (check.top() != str[i]) {
                return false;
            }
            check.pop();
        }
    }

    return true;
}

int main() {
    int max = -1;

    for (int i = 999; i >= 100; --i) {
        for (int j = 999; j >= 100; --j) {
            if (isPalindrome(i * j)) {
                if (max < i *j) {
                    max = i * j;
                }
            }
        }
    }

    cout << max << endl;
}