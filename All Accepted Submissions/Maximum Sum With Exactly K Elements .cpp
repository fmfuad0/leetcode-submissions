//Author : https://leetcode.com/u/fmfuad/
//Title : Maximum Sum With Exactly K Elements 
//Submission id : 998872484
//Problem url : https://leetcode.com/problems/maximum-sum-with-exactly-k-elements/
//Submission url : https://leetcode.com/submissions/detail/998872484/


class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());
        int sum=0;
        int i=0;
        int max=nums[0];
        while(i<k)
        {
            sum+=max;
            max+=1;
            i++;
        }
        return sum;
    }
};
