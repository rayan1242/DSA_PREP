class Solution {
public:
    
    vector<int> searchRange(vector<int>& nums, int target) {

     int firstOccurance = findBound(nums,target,true);
     int lastOccurance = findBound(nums,target,false);
     if(firstOccurance == -1){
         return vector<int> {-1,-1};
     }   
     return vector<int> {firstOccurance,lastOccurance};
    }
    int findBound(vector<int>& nums,int target,bool isFirst){
        int begin=0;
        int end=nums.size()-1;
        while(begin<=end){
                int mid=(begin+end)/2;
                if(nums[mid]==target){
                    if(isFirst){
                        if(mid==begin || nums[mid-1] != target){
                            return mid;
                        }else{
                            end=mid-1;
                        }
                    }else{
                        if(mid==end || nums[mid+1] != target){
                            return mid;

                        }else{
                            begin=mid+1;
                        }
                    }
                }else if(nums[mid]>target){
                    end=mid-1;
                }else{
                    begin=mid+1;
                }

        }
        return -1;
    }

};

