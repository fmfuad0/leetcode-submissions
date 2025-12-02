//Author : https://leetcode.com/u/fmfuad/
//Title : Longest Palindromic Substring
//Submission id : 1086852384
//Problem url : https://leetcode.com/problems/longest-palindromic-substring/
//Submission url : https://leetcode.com/submissions/detail/1086852384/


class Solution {
public:

    bool isPalindrome(string s)
    {
        for(int i=0; i<s.size()/2; i++)
        {
            if(s[i]!=s[s.size()-i-1])
            return false;
        }
        return true;
    }
    string longestPalindrome(string s) 
    {
        if(s.size()==1)
            return s;
        string result="";
        result+=s[0];
        for(int i=0; i<=s.size()-result.size(); i++)
        {
            char ch=s[i];
            for(int j=s.size()-1; j>=i+result.size(); j--)
            {
                if(s[j]==ch)
                {
                    if(isPalindrome(s.substr(i, j-i+1)))
                        if(result.size()<s.substr(i, j-i+1).size())
                            result=s.substr(i, j-i+1);
                }
            }
        }
        return result;
    }
};
