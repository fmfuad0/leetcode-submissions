//Author : https://leetcode.com/u/fmfuad/
//Title : Rotate Array
//Submission id : 1088663024
//Problem url : https://leetcode.com/problems/rotate-array/
//Submission url : https://leetcode.com/submissions/detail/1088663024/


class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        vector<int> result;
        if(nums.size()==k || nums.size()==1)
            return ;
        for(int i=nums.size()-(k%nums.size()); i<nums.size(); i++)    
            result.push_back(nums[i]);
        for(int i=0; i<nums.size()-(k%nums.size()); i++)
            result.push_back(nums[i]);
        nums=result;
    }
};
