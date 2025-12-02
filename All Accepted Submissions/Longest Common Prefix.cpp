//Author : https://leetcode.com/u/fmfuad/
//Title : Longest Common Prefix
//Submission id : 1024847063
//Problem url : https://leetcode.com/problems/longest-common-prefix/
//Submission url : https://leetcode.com/submissions/detail/1024847063/


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        vector< vector<char> > vecc;
        int length=500;
        string result="";
        bool found=false;
        for(int i=0; i<strs[0].size(); i++)
        {
            char ch=strs[0][i];
            for(int j=0; j<strs.size(); j++)
            {
                if(strs[j][i]!=ch)
                {
                    found=true;
                    break;
                }
            }
            if(found)
            break;
            result+=ch;
        }
        return result;
    }
};
