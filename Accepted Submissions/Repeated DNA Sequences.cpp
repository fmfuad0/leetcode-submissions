//Author : https://leetcode.com/u/fmfuad/
//Title : Repeated DNA Sequences
//Submission id : 1442729550
//Problem url : https://leetcode.com/problems/repeated-dna-sequences/
//Submission url : https://leetcode.com/submissions/detail/1442729550/


class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) 
    {
        map<string, int> mapp;
        vector<string> result;
        for(int i=0; i<=s.size()-10 && s.size()>=10; i++)
        {
            mapp[s.substr(i, 10)]++;
            if(mapp[s.substr(i, 10)]==2)
                result.push_back(s.substr(i, 10));
        }
    return result;
    }
};
