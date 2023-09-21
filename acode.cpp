#include<iostream>
#include<string>

void acode(std::string& str,int i,std::string output){
	if(i==str.size()){
		std::cout<<output<<"\n";
		return;
	}
	if(i == str.size()-1){
		int ch = str[i] - '0';
		acode(str,i+1,output + (char)(64+ch));
	}
	else{
		int one = str[i] - '0';
		int c1 = str[i] - '0';
		int c2 = str[i+1] - '0';
		int two = c1*10 + c2;
		acode(str,i+1,output +(char)(64+one));
		if(two<=26){
		acode(str,i+2,output + (char)(64+two));			
		}
	}
}

int main(){
	std::string str = "25114";
	acode(str,0,"");
	return 0;
}
