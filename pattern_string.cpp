#include<iostream>
#include<string>
void f(int n,int r,int c){
	if(r>n) return;
	if(c>r){
			std::cout<<"\n";
			f(n,r+1,1);
			return;
	}
	std::cout<<"*";
	f(n,r,c+1);
}

int main(){
	f(5,1,1);
	return 0;
}
