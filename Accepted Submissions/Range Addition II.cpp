//Author : https://leetcode.com/u/fmfuad/
//Title : Range Addition II
//Submission id : 1148854146
//Problem url : https://leetcode.com/problems/range-addition-ii/
//Submission url : https://leetcode.com/submissions/detail/1148854146/


class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) 
    {
        int r=INT_MAX, c=INT_MAX;
        for(auto i:ops)
        {
            r=min(r, i[0]);
            c=min(c, i[1]);
        }
        if(ops.size()==0)
            return m*n;
        else
            return r*c;
    }
};
