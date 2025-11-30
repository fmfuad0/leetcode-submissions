//Author : https://leetcode.com/u/fmfuad/
//Title : Cells in a Range on an Excel Sheet
//Submission id : 1148894948
//Problem url : https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet/
//Submission url : https://leetcode.com/submissions/detail/1148894948/


class Solution {
public:
    vector<string> cellsInRange(string s) 
    {
        vector<string> ans;
        for(char i=s[0]; i<=s[3]; i++)
        {
            string str="";
            str+=i;
            for(int i=s[1]; i<=s[4]; i++)
            {
                string temp=str;
                temp+=(char)i;
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
