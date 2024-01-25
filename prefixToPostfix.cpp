#include <iostream>
#include <stack>
#include <algorithm>  // Include the algorithm header for std::reverse
using namespace std;

bool isOperator(char c) {
    return (c=='+' || c=='-' || c=='*' ||c=='/');
}

string prefixToPost(string s) {
    stack<string> st;
    for (char& c : s) {
        if (isOperator(c)) {
            // Convert the character to a string
            string op1 = st.top(); st.pop();
            string op2 = st.top(); st.pop();
            string temp = op1 + op2 + c;
            st.push(temp);
        } else {
        	 string operand(1, c);
             st.push(operand);
        }
    }
    string temp = st.top();st.pop();
    temp+=st.top();
    return temp;
}

int main() {
    string s = "+AB-CD";
    
    // Reverse the string using std::reverse
    std::reverse(s.begin(), s.end());
    
    cout << prefixToPost(s) << endl;
    return 0;
}

