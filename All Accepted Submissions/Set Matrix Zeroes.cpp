//Author : https://leetcode.com/u/fmfuad/
//Title : Set Matrix Zeroes
//Submission id : 1087093137
//Problem url : https://leetcode.com/problems/set-matrix-zeroes/
//Submission url : https://leetcode.com/submissions/detail/1087093137/


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        vector<int> col;
        vector<int> row;
        for(int i=0; i<matrix.size(); i++)
        {
            if(find(matrix[i].begin(), matrix[i].end(), 0)!=matrix[i].end())
            {
                for(int j=0; j<matrix[i].size(); j++)
                {
                    if(matrix[i][j]==0)
                        col.push_back(j);
                    else
                        matrix[i][j]=0;
                }
            }
        }
        for(int i=0; i<matrix[0].size(); i++)
        {
            if(find(col.begin(), col.end(), i)!=col.end())
            {
                for(int j=0; j<matrix.size(); j++)
                    matrix[j][i]=0;
            }
        }
    }
};
