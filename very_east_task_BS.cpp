#include<iostream>

bool satisfTime(int n,int x,int y,int mid){

	return (mid/x)+(mid/y)>=n-1;
}

int minTime(int n,int x,int y){
	if(n==1){
		return std::min(x,y);
	}
	int lo=0;
	int hi=std::max(x,y)*n;
	int ans=0;

	while(lo<=hi){
		int mid=(lo+hi)/2;
		if(satisfTime(n,x,y,mid)){
			ans=mid;
			hi=mid-1;
		}
		else{
			lo=mid+1;
		}

	}
	return ans + std::min(x,y);
}



int main(){
	int n,x,y;
	std::cin>>n>>x>>y;
	std::cout<<minTime(n,x,y);
}
