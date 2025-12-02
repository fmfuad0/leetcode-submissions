//Author : https://leetcode.com/u/fmfuad/
//Title : Find the Index of the First Occurrence in a String
//Submission id : 1017505640
//Problem url : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
//Submission url : https://leetcode.com/submissions/detail/1017505640/


class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        size_t found = haystack.find(needle);
        if (found != string::npos)
                return found;
        return -1;
    }
};
