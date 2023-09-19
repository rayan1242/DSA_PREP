class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        int sum = 0;
        int cnt = 0;
        int check;
        um[0] = 1;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            check = sum - k;
            if(um.find(check) != um.end())
                cnt+=um[check]; 
            um[sum]++;
        }

    return cnt;
    }
};