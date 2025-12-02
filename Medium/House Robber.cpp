//Author : https://leetcode.com/u/fmfuad/
//Title : House Robber
//Submission id : 1583710369
//Problem url : https://leetcode.com/problems/house-robber/
//Submission url : https://leetcode.com/submissions/detail/1583710369/


class Solution {
public:

    int maxRob(int i, vector<int> &nums, vector<int> &dp){
        int money1=0;
        int money2=0;
        
        if(i<nums.size()){
            if(dp[i]!=-1)
                return dp[i];
            ///ROB
            money1 = nums[i];
            money1 += maxRob(i+2, nums, dp);
            ///DONT ROB
            money2 = maxRob(i+1, nums, dp);
            dp[i] = max(money1, money2); 
            ///STORE DP VALUE(MAX POSSIBLE ROBBERY) WHILE CALCULATED FOR A CELL
            return dp[i];
        }
        return 0;
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        // cout << maxRob(0, nums, dp);
        return  maxRob(0, nums, dp);
    }
};
