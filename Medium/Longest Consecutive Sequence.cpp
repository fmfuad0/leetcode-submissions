//Author : https://leetcode.com/u/fmfuad/
//Title : Longest Consecutive Sequence
//Submission id : 1092140509
//Problem url : https://leetcode.com/problems/longest-consecutive-sequence/
//Submission url : https://leetcode.com/submissions/detail/1092140509/


class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(nums.empty())
            return 0;
        sort(nums.begin(), nums.end());
        int result=1;
        int length=1;
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]==nums[i-1]+1)
                length++;
            else if(nums[i]!=nums[i-1])
            {
                result=max(result, length);
                length=1;
            }
        }
        result=max(result, length);
        return result;
    }
};
