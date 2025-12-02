//Author : https://leetcode.com/u/fmfuad/
//Title : Remove All Adjacent Duplicates In String
//Submission id : 997057628
//Problem url : https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
//Submission url : https://leetcode.com/submissions/detail/997057628/


class Solution {
public:

    string removeDuplicates(string s) {
    string result="";
    for(auto i:s)
    if(!result.empty() &&  result.back()==i)
        result.pop_back();
    else
        result.push_back(i);
    return result;
    }
};
