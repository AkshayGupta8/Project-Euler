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

class Stack {
  private:
    int capacity = 10;
    int size = 0;
    int *data;
  public:
    Stack() {
        int data[capacity];
        this->data = data;
    }
};

int main() {
    Stack s();

}