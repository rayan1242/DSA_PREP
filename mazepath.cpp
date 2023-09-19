#include<iostream>

void f(int i,int j,int n,int m ,std::string output){
	if(i>n || j>m) return;
	if(i==n-1 && j==m-1){
		std::cout<<output<<"\n";
		return;
	}

	f(i+1,j,m,n,output + "R");
	f(i,j+1,m,n,output + "D");
}

int main(){
	f(0,0,3,3,"");
	return 0;
}