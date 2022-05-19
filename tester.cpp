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
#include <stack>

using namespace std;

int main() {
    vector< stack<int> > data;
    stack<int> s;
    data.push_back(s);

    data[0].push(1);

    for (int i = 0; i < data.size(); ++i) {
        // cout << s.top();
        stack<int>& s = data[i];
        cout << s.top() << endl;
        s.push(3);
        cout << data[0].top();
    }
}