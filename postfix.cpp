#include<bits/stdc++.h>
using namespace std;

int precedence(char c){
    if(c=='^'){
        return 0;
    }else if(c=='*' || c=='/'){
        return 1;
    }else if(c=='+' || c=='-'){
        return 2;
    }else{
        return 0;
    } 
}

bool isOperand(char c){
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        return true;
    }else{
         return false;
    }
}

string postfix(string s){
    string pf = "";
    stack<int> st;

    for(char& c:s){
        if(isOperand(c)){
            pf += c;
        }else if(c=='('){
            st.push(c);
        }else if(c==')'){
            while(!st.empty() && st.top()!='('){
                pf += st.top();
                st.pop();
            }
            st.pop();
        }else{
            while(!st.empty() && precedence(c)<=precedence(st.top())){
                pf += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while(!st.empty()){
        pf += st.top();
        st.pop();
    }

    return pf;
}

int main(){
    string s = "A+B*(C-D)/E";
    cout << "Infix: " << s << endl;
    cout << "Postfix: " << postfix(s) << endl;
    return 0;
}

