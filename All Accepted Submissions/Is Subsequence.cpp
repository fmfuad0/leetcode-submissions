//Author : https://leetcode.com/u/fmfuad/
//Title : Is Subsequence
//Submission id : 1138733883
//Problem url : https://leetcode.com/problems/is-subsequence/
//Submission url : https://leetcode.com/submissions/detail/1138733883/


class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        if(s.size()==0)
            return true;
        if(t.size()<s.size())
            return false;
        int cnt=0, pos=0;
        for(int i=0; i<t.size(); i++)
        {
            if(t[i]==s[pos])
            {
                cnt++;
                pos++;
                if(cnt==s.size())
                    return true;
            }
        }
        return false;
    }
};
