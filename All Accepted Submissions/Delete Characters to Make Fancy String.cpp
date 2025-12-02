//Author : https://leetcode.com/u/fmfuad/
//Title : Delete Characters to Make Fancy String.cpp
//Submission id : 1844192159
//Problem url : https://leetcode.com/problems/delete-characters-to-make-fancy-string/
//Submission url : https://leetcode.comhttps://leetcode.com/submissions/detail/1844192159/


class Solution {
public:
    string makeFancyString(string s) {
        string result = "";
        if(s.size()<3)return s;
        result+=s.substr(0, 2);
        int i=2, c;
        (result[0]==result[1])? c=2 : c=1;
        while(i<s.size()){
            (result[result.size()-1]==s[i])?((c<2)?(result+=s.substr(i, 1), c++) : i ) : (result+=s.substr(i, 1), c=1);
            i++;
        }
        return result;
    }
};
