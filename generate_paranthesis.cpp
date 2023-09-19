class Solution {
public:
    std::vector<string> result;
    void f(int n,int o,int c,std::string output){
        if(c == n){
            result.push_back(output);
            return;
        }
        if(o>c){
            f(n,o,c+1,output + ")");
        }
        if(o<n){
            f(n,o+1,c,output + "(");
        }

    }

    vector<string> generateParenthesis(int n) {
        result.clear();
        f(n,0,0,"");
        return result;
    }
};