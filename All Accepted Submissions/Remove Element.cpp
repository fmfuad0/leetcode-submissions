//Author : https://leetcode.com/u/fmfuad/
//Title : Remove Element
//Submission id : 1032530349
//Problem url : https://leetcode.com/problems/remove-element/
//Submission url : https://leetcode.com/submissions/detail/1032530349/


class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int x=0;
        int cnt=0;
        vector<int> ex;
        ex.resize(nums.size());
        for(auto i:nums)
        {
            if(i!=val)
            {
                ex[x++]=i;
                cnt++;
            }
        }
        nums=ex;
        return cnt;
    }
};
