//Author : https://leetcode.com/u/fmfuad/
//Title : Letter Combinations of a Phone Number
//Submission id : 1152910096
//Problem url : https://leetcode.com/problems/letter-combinations-of-a-phone-number/
//Submission url : https://leetcode.com/submissions/detail/1152910096/


class Solution {
public:
    vector<string> result;
    map<char, string> mapp={
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"},
        
    };
    void makePair(string str, int ind, string &digits)
{
    for (int i = 0; i < mapp[digits[ind]].size(); i++)
    {
        str += mapp[digits[ind]][i];
        if (ind == digits.size() - 1)
        {
            result.push_back(str);
        }
        else
            makePair(str, ind + 1, digits);
        str.pop_back();
    }
}
    vector<string> letterCombinations(string digits) 
    {
        makePair("", 0, digits);
        return result;
    };
};
