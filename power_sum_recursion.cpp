#include<iostream>
#include<math.h>
int count = 0;
void f(int x,int n,int i){
	int p = (int)pow(i,n);
	if(x == 0){
		count++;
		return;
	}
	if(p>x){
		return;
	}
	if(x<0){
		return;
	}
	f(x-p,n,i+1);
	f(x,n,i+1);
}

int powerSum(int X,int N){
	f(X,N,1);
	return count;
}

int main(){
	int n,x;
	std::cin>>n>>x;
	std::cout<<powerSum(n,x)<<"\n";
}	
