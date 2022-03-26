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

//  1.9 String rotation
bool isSubstring(string s, string t) {
    int s_idx = 0;
    for (int i = 0; i < t.size(); ++i) {
        if (s[s_idx] == t[i]) {
            ++s_idx;
        }
    }
    return s_idx == s.size();
}
//
bool isRotation(string s1, string s2) {
    if (s1.size() != s2.size()) {
        return false;
    }

    string temp = s1;
    for (int i = 0; i < s1.size(); ++i) {
        s1.append(temp.substr(i));
        s1.append(temp.substr(i, i));
    }
    cout << "hellllooooo\n";
    return isSubstring(s2, s1);
}

int main() {
    // cout << isRotation("waterbottle", "ewaterbottl") << endl;
    string temp = "hello";
    cout << temp.substr(2, 1).append("\n") << endl;

}