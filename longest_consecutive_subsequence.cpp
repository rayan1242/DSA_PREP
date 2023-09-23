class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool> um;
        int maxEle = 0;
        int maxLength = 0;


        for(int i=0;i<nums.size();i++){
            int num1 =nums[i] -1;
            int num2 = nums[i] +1;
            if(um.find(num1) == um.end()){
                um[nums[i]] = true;
                if(um.find(num2) != um.end()){
                    um[nums[i]+1] = false;
                
                }
            }
            else{
                um[nums[i]] = false;
                int num = nums[i] + 1;
                if(um.find(num) != um.end()) um[nums[i]+1] = false;
            }

        }
        

        vector<int> key;

        for(auto x : um){
            cout<<x.first<<"/"<<x.second<<endl;
            if(x.second == true){
                key.push_back(x.first);
            }

        }
        
        for(int i=0;i<key.size();i++){
             cout<<key[i]<<"key"<<endl;

            int startEle = key[i];
            int start = 0;

            while(um.find(startEle) != um.end()){
                start++;
                startEle++;
            }


            if(start>maxLength){

                maxLength = start;
            }
        }

        return maxLength;
    }
};