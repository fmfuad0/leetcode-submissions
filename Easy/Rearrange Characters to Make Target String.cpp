//Author : https://leetcode.com/u/fmfuad/
//Title : Rearrange Characters to Make Target String
//Submission id : 1110614043
//Problem url : https://leetcode.com/problems/rearrange-characters-to-make-target-string/
//Submission url : https://leetcode.com/submissions/detail/1110614043/


class Solution {
public:
    int rearrangeCharacters(string s, string target) 
    {
        map<char, int> mapp;
        for(auto i:s)
            mapp[i]++;
        int result=INT_MAX;
        map<char, int> t;
        for(auto i:target)
            t[i]++;
        for(auto i:target)
        {
            result=min(result, mapp[i]/t[i]);
        }
        return result;
    }
};
