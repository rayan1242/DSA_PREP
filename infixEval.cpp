#include <bits/stdc++.h>
using namespace std;

bool isDigit(char c) {
    return (c >= '0' && c <= '9');
}

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int precedence(char c) {
    if (c == '+' || c == '-') {
        return 1;
    } else if (c == '*' || c == '/') {
        return 2;
    } else if (c == '^') {
        return 3;
    } else {
        return 0;
    }
}

int performOpt(int op1, int op2, char opt) {
    switch (opt) {
    case '+':
        return op1 + op2;
    case '-':
        return op1 - op2;
    case '*':
        return op1 * op2;
    case '/':
        return op1 / op2;
    case '^':
        return pow(op1, op2);
    default:
        return 0;
    }
}

int infixEval(string s) {
    stack<int> op;
    stack<char> opt;
    for (char &c : s) {
        if (isDigit(c)) {
            op.push(c - '0');
        } else if (c == '(') {
            opt.push(c);
        } else if (c == ')') {
            while (!opt.empty() && opt.top() != '(') {
                int op2 = op.top();
                op.pop();
                int op1 = op.top();
                op.pop();
                char oper = opt.top();
                opt.pop();
                int result = performOpt(op1, op2, oper);
                op.push(result);
            }
            opt.pop(); // Pop '('
        } else if (isOperator(c)) {
            while (!opt.empty() && precedence(opt.top()) >= precedence(c)) {
                int op2 = op.top();
                op.pop();
                int op1 = op.top();
                op.pop();
                char oper = opt.top();
                opt.pop();
                int result = performOpt(op1, op2, oper);
                op.push(result);
            }
            opt.push(c);
        }
    }
    while (!opt.empty()) {
        int op2 = op.top();
        op.pop();
        int op1 = op.top();
        op.pop();
        char oper = opt.top();
        opt.pop();
        int result = performOpt(op1, op2, oper);
        op.push(result);
    }
    return op.top();
}

int main() {
    string s = "2(5*(3+6))/5-2";
    int result = infixEval(s);
    cout << "Result: " << result << endl;
    return 0;
}

