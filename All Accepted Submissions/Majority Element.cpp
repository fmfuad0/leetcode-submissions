//Author : https://leetcode.com/u/fmfuad/
//Title : Majority Element
//Submission id : 1088658743
//Problem url : https://leetcode.com/problems/majority-element/
//Submission url : https://leetcode.com/submissions/detail/1088658743/


class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        map<int, int> mapp;
        int result=0;
        for(auto i:nums)
        {
            mapp[i]++;
            if(mapp[i]>nums.size()/2)
                return i;
        }
        return 0;
    }
};
