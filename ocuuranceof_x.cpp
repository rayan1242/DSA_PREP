#include<iostream>

void f(std::string& str,int i,std::string output){
	if(i==str.size()){
		std::cout<<output<<"\n";
		return;
	}
	if(str[i] == 'x'){
		f(str,i+1,output);
	}
	f(str,i+1,output+str[i]);
}



int main(){
	std::string str = "moabxxdxcyx";
	f(str,0,"");
	return 0;
}
