//Author : https://leetcode.com/u/fmfuad/
//Title : Roman to Integer
//Submission id : 1016889893
//Problem url : https://leetcode.com/problems/roman-to-integer/
//Submission url : https://leetcode.com/submissions/detail/1016889893/


class Solution {
public:
    int romanToInt(string s) 
    {
        map<char, int> mapp;
        mapp['I']= 1;
        mapp['V']= 5;
        mapp['X']= 10;
        mapp['L']= 50;
        mapp['C']= 100;
        mapp['D']= 500;
        mapp['M']= 1000;
        
        int result=0;
        for(int i=0; i<s.size(); i++)
        {
            if(mapp[s[i]]<mapp[s[i+1]])
            {
                result+=mapp[s[i+1]]-mapp[s[i]];
                i++;
            }
            else
                result+=mapp[s[i]];
        }
        return result;
    }
};
