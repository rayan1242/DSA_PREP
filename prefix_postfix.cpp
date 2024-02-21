#include<bits/stdc++.h>
using namespace std;

int precedence(char c){
	if(c=='^'){
		return 0;
	}else if(c=='*' || c=='/'){
		return 1;
	}else if(c=='+' || c=='-'){
		return 2;
	}
	return -1; 
}

bool isOperand(char c){
	if(c=='a' || c=='z' && c=='A' || c=='Z'){
		return true;
	}else{
		 return false;
	}
}

int main(){
	string pf="";
	stack<int> st;
	string s = "A+B*(C-D)/E";
	for(char& c:s){
		if(isOperand(c){
			pf+=c;
		}else if(c=='('){
			push(c);

		}else if(c==')'){
			while(!st.empty() && st.top()!='('){
				pf+=st.top();
				st.pop();
			}
			st.pop();

		}else{
			while(!st.empty() && precedence(c)<=precedence(st.top())){
			pf+=st.top();
			st.pop();
			}
			st.push(c);
		}
	}
	cout<<pf;
	return 0;
}
