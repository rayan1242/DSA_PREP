class Solution {
public:
    vector<string> mapping = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; 
    void f(vector<string>& result,std::string& str,int i,std::string output){
        if(i == str.size()) {    
            result.push_back(output);
            return;
        }
        int digit = str[i] + '0';
        std::string charMapping =  mapping[digit];
        for(int j=0;j<charMapping.size();j++){
            f(result,str,i+1,output + charMapping[j]);
        }

    }
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if(digits.size() == 0) return result;
        f(result,digits,0,"");
        return result;
    }
};