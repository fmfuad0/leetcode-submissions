//Author : https://leetcode.com/u/fmfuad/
//Title : Valid Anagram
//Submission id : 1449622351
//Problem url : https://leetcode.com/problems/valid-anagram/
//Submission url : https://leetcode.com/submissions/detail/1449622351/


class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        map<char, int> m;
        map<char, int> mm;
        for(auto i:s)
        m[i]++;
        for(auto i:t)
        mm[i]++;
        for(auto i:m)
            if(mm[i.first]!=i.second || s.size()!=t.size())
                return false;
        return true;
    }
};
