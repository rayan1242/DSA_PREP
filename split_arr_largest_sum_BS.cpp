class Solution {
public:
    int countMinMax(vector<int>& nums,int mid){
        int k=1;
        long long sumSubarr=0;
        for(int i=0;i<nums.size();i++){
            if(sumSubarr+nums[i]<=mid){
                sumSubarr+=nums[i];
            }else{
                k+=1;
                sumSubarr=nums[i];
            }
        }
        return k;
    }
    int splitArray(vector<int>& nums, int k) {
         if(k>nums.size()) return -1;
        int low = *max_element(nums.begin(),nums.end());
        int hi = accumulate(nums.begin(),nums.end(),0);
        while(low<=hi){
            int mid=(hi+low)/2;
            int subarr=countMinMax(nums,mid);
            if(subarr>k){
                low=mid+1;

            }else if(subarr<k){
                hi=mid-1;
            }
        }
        return low;
    }
};