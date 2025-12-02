//Author : https://leetcode.com/u/fmfuad/
//Title : Find First and Last Position of Element in Sorted Array
//Submission id : 1086991737
//Problem url : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
//Submission url : https://leetcode.com/submissions/detail/1086991737/


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> result;
        if(find(nums.begin(), nums.end(), target)==nums.end())
            return {-1, -1};
        else
        {
            result.push_back(lower_bound(nums.begin(), nums.end(), target)-nums.begin());
            result.push_back(upper_bound(nums.begin(), nums.end(), target)-nums.begin()-1);
        }
        return result;
    }
};
