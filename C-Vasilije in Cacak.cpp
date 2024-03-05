#include<bits/stdc++.h>
using namespace std;

bool threeSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end()); // Sort the array
    int n = nums.size();
    
    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;
        
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == target) {
                return true; // Found a triplet whose sum is equal to the target
            } else if (sum < target) {
                left++; // Increment left pointer if sum is smaller than target
            } else {
                right--; // Decrement right pointer if sum is larger than target
            }
        }
    }
    return false; // No triplet found
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        if (threeSum(nums, k)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

