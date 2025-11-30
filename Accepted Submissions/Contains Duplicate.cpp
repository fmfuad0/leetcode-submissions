//Author : https://leetcode.com/u/fmfuad/
//Title : Contains Duplicate
//Submission id : 996749036
//Problem url : https://leetcode.com/problems/contains-duplicate/
//Submission url : https://leetcode.com/submissions/detail/996749036/


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> mapp;
        for(auto i:nums)
            mapp[i]++;
        bool found=false;
        for(auto i:mapp)
            if(i.second>1)
                found=true;
        if(found)return true;else return false;
    }
};
