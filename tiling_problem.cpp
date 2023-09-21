#include<iostream>

int f(int n){
	if (n==0 || n==1 || n==2) return n;
	return f(n-1) + f(n-2);
}

int main(){
	int n;
	std::cin>>n;
	std::cout<<f(n);
	return 0;
}