//Author : https://leetcode.com/u/fmfuad/
//Title : Search a 2D Matrix
//Submission id : 1087096104
//Problem url : https://leetcode.com/problems/search-a-2d-matrix/
//Submission url : https://leetcode.com/submissions/detail/1087096104/


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        for(auto i:matrix)
        {
            if(find(i.begin(), i.end(), target)!=i.end())
                return true;
        }
        return false;
    }
};
