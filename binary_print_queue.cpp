#include <iostream>
#include <queue>
using namespace std;

void binary(int n) {
    queue<string> q;
    q.push("1");

    while (n > 0) {
        string s1 = q.front();
        cout << s1 << " ";
        q. (s1 + "0");
        q.push(s1 + "1");
        q.pop();
        n--;
    }
}

int main() {
    int n = 5;
    binary(n);
    return 0;
}

