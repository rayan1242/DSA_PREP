class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-2;
        while(i>=0 and nums[i+1]<=nums[i]){
            i--;
        }
        if(i>=0){
            int j=nums.size()-1;
            while(nums[i]>=nums[j]){
                j--;
            }
            swap(nums,i,j);
        }
        reverse(nums,i+1);

    }

    void reverse(vector<int>& nums,int start){
        int i=start,j=nums.size()-1;
        while(i<j){
        swap(nums,i,j);
        i++,j--;
        }
    }

    void swap(vector<int>& nums,int i,int j){
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;

    }
};