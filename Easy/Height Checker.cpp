//Author : https://leetcode.com/u/fmfuad/
//Title : Height Checker
//Submission id : 1027750841
//Problem url : https://leetcode.com/problems/height-checker/
//Submission url : https://leetcode.com/submissions/detail/1027750841/


class Solution {
public:
    int heightChecker(vector<int>& heights) 
    {
        vector<int> sorted=heights;
        sort(sorted.begin(), sorted.end());
        int result=0;
        for(int i=0; i<heights.size(); i++)
            if(heights[i]!=sorted[i])
                result++;
        return result;
    }
};
