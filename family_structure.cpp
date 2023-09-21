#include<iostream>
#include<math.h>
char getChild(char root,long long int n,long long int k){
	if(n==1){
		return root;
	}
	long long int value = (pow(2,n-1))/2;
	if(k <= value){
		return getChild(root,n-1,k);
	} else{
		char new_root = (root == 'M') ? 'F':'M';
		return getChild(new_root,n-1,k-value);
	}
}

int main(){
	int t;
	std::cin>>t;
	while(t--){
		long long int n,k;
		std::cin>>n>>k;
		char result = getChild('M',n,k);
		if(result ==  'M'){
			std::cout<<"Male\n";
		}else{
			std::cout<<"Female\n";
		}
	}
	return 0;
}
