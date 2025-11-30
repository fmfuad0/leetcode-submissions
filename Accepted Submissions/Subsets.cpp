//Author : https://leetcode.com/u/fmfuad/
//Title : Subsets
//Submission id : 1089485660
//Problem url : https://leetcode.com/problems/subsets/
//Submission url : https://leetcode.com/submissions/detail/1089485660/


class Solution {
public:
    void solve(vector<int> &nums, int index, vector<int> output, vector<vector<int>> &result)
    {
        if(index==nums.size())
        {
            result.push_back(output);
            return;
        }
        solve(nums, index+1, output, result);
        output.push_back(nums[index]);
        solve(nums, index+1, output, result);
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> result;
        vector<int> output;
        int index=0;
        solve(nums, index, output, result);
        return result;
    }
};
