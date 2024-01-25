#include <bits/stdc++.h>
using namespace std;

char firstNonRepeatingChar(const string& s) {
    queue<char> q;
    unordered_map<char, int> frequency;

    for (char c : s) {
        q.push(c);
        frequency[c]++;

        // Remove characters from the front of the queue until a non-repeating character is found
        while (!q.empty() && frequency[q.front()] > 1) {
            q.pop();
        }
    }

    // If the queue is not empty, the front contains the first non-repeating character
    if (!q.empty()) {
        return q.front();
    } else {
        return '\0'; // Return null character if no non-repeating character is found
    }
}

int main() {
    // Continuously read strings from the stream
    string input;
    while (cin >> input) {
        char result = firstNonRepeatingChar(input);
        
        if (result != '\0') {
            cout << "First non-repeating character: " << result << endl;
        } else {
            cout << "No non-repeating character found." << endl;
        }
    }

    return 0;
}

