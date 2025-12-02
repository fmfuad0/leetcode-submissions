//Author : https://leetcode.com/u/fmfuad/
//Title : Maximum Subarray
//Submission id : 1620513712
//Problem url : https://leetcode.com/problems/maximum-subarray/
//Submission url : https://leetcode.com/submissions/detail/1620513712/


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long maxSum = INT_MIN;
        int maxi = nums[0];
        long long current =0;
        for(int i=0; i<nums.size(); i++){
            maxi = max(maxi, nums[i]);
            current+=nums[i];
            if(current<0)
                current=0;
            else
                maxSum = max(maxSum, current);
        }
        if(maxSum>maxi)
            return maxSum;
        return maxi;
        
    }
};
