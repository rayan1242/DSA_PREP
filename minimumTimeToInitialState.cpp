#include<bits/stdc++.h>
using namespace std;

    int minimumTimeToInitialState(string word, int k) {
          int n = word.length();
        vector<int> start(n, 0);
        
        for(int i=0; i<word.length(); ++i){
            int rem = n - i;
            if(word.substr(i, rem) == word.substr(0, rem)){
                start[i] = 1; 
                cout<<i<<"\n";
            }
        }
       
       int i=0;

       int ans=0;

       while(true){

           i+=k;
           ans++;

           if(i>=n) break;
           if(start[i]) break;

   


       }
    
        return ans;
    }
    int main(){
        cout<<minimumTimeToInitialState("abaaxyzabaa",3);
        return 0;
    }
