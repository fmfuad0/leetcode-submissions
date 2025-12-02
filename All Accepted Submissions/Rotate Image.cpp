//Author : https://leetcode.com/u/fmfuad/
//Title : Rotate Image
//Submission id : 1065258850
//Problem url : https://leetcode.com/problems/rotate-image/
//Submission url : https://leetcode.com/submissions/detail/1065258850/


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        vector<vector<int>> result;
        int cnt=0;
        while(cnt<matrix.size())
        {
            vector<int> tmp;
            for(int i=matrix.size()-1; i>=0; i--)
            {
                
                tmp.push_back(matrix[i][cnt]);
            }
            result.push_back(tmp);
            cnt++;
        }
        matrix=result;
    }
};
