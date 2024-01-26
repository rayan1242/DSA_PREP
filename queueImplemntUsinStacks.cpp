#include<bits/stdc++.h>
using namespace std;

stack<int> st1;
stack<int> st2;
void enque(int a){
	/*
	int c=st1.top();st1.pop();
 	st2.push(c);
	*/
 	while(!st1.empty()){
 		int c=st1.top();st1.pop();
 		st2.push(c);
	 }
	st1.push(a);
	 while(!st2.empty()){
	 	int d=st2.top();st2.pop();
	 	st1.push(d);
	 }

}

int deq(){
	/*
	while(!st1.empty()){
		int c=st1.top();
		st1.pop();
		st2.push(c);
   	}
	 int b=st2.top();
	 st2.pop();
	 return b
	 */
	int b=0;
	if(!st1.empty()) b=st1.top();
	st1.pop();
	return b;
}

int main(){
	enque(10);
	enque(20);
	enque(15);
	enque(15);
	enque(0);
	cout<<deq()<<"\n";
	cout<<deq()<<"\n";
	cout<<deq()<<"\n";
	cout<<deq()<<"\n";

	
}
