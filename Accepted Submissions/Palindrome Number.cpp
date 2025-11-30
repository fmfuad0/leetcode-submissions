//Author : https://leetcode.com/u/fmfuad/
//Title : Palindrome Number
//Submission id : 1017572389
//Problem url : https://leetcode.com/problems/palindrome-number/
//Submission url : https://leetcode.com/submissions/detail/1017572389/


class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0)
            return false;
        if(x<9 && x>=0)
            return true;
        string str=to_string(x);
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]!=str[str.size()-i-1])
                return false;
        }
        return true;
    }
};
