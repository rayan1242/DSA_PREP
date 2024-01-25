#include <iostream>
#include <stack>
#include <cctype> // Include the cctype header for isdigit
using namespace std;

int evaluate(string s) {
    stack<int> st;
    
    for (char& c : s) {
        if (isdigit(c)) {
            st.push(c - '0');
        } else {
            int op2 = st.top(); st.pop();
            int op1 = st.top(); st.pop();

            switch (c) {
                case '+':
                    st.push(op1 + op2);
                    break;
                case '/':
                    st.push(op1 / op2);
                    break;
                case '-':
                    st.push(op1 - op2);
                    break;
                case '*':
                    st.push(op1 * op2);
                    break;
                default:
                    cout << "Invalid operator: " << c << endl;
                    return -1; // Return an error code
            }
        }
    }

    return st.top();
}

int main() {
    string s = "2536+**5/2-";
    cout << evaluate(s) << endl;

    return 0;
}

