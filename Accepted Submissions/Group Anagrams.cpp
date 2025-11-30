//Author : https://leetcode.com/u/fmfuad/
//Title : Group Anagrams
//Submission id : 1087007465
//Problem url : https://leetcode.com/problems/group-anagrams/
//Submission url : https://leetcode.com/submissions/detail/1087007465/


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> v;
        map<string, vector<string>> mapp;
        map<string, int> fre;
        for(auto i:strs)
        {
            string temp=i;
            sort(temp.begin(),temp.end());
            v.push_back(temp);
        }
        for(auto i:v)
        cout << i << endl;
        for(int i=0; i<v.size(); i++)
            mapp[v[i]].push_back(strs[i]);
        vector<vector<string>> result;
        for(auto i:mapp)
        {
            result.push_back(i.second);
        }
        return result;
    }
};
