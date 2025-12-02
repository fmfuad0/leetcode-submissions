//Author : https://leetcode.com/u/fmfuad/
//Title : Find Words That Can Be Formed by Characters
//Submission id : 1110612280
//Problem url : https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/
//Submission url : https://leetcode.com/submissions/detail/1110612280/


class Solution {
public:
    int countCharacters(vector<string>& words, string chars) 
    {
        map<string, map<char, int>> mapp;
        for(auto i:words)
        {
            map<char, int> tmp;
            for(auto j:i)
                tmp[j]++;
            mapp[i]=tmp;
        }
        map<char, int> m;
        for(auto i:chars)
            m[i]++;
        int result=0;
        for(auto i:words)
        {
            for(int j=0; j<i.size(); j++)
            {
                if(mapp[i][i[j]]>m[i[j]])
                    break;
                else if(j==i.size()-1)
                    result+=i.size();
            }
        }
        return result;
    }
};
