#include<iostream>
#include<string.h>
void subsequence(std::string& str,int i,std::string output){
	if(i == str.size()){
		std::cout<<output<<"\n";
		return;
	}	
	subsequence(str,i+1,output+str[i]);	
	subsequence(str,i+1,output);
	
}

int main(){
	std::string s = "abc";
	subsequence(s,0,"");
	return 0;
}
