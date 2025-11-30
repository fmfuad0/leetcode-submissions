//Author : https://leetcode.com/u/fmfuad/
//Title : Reverse Words in a String
//Submission id : 1580557573
//Problem url : https://leetcode.com/problems/reverse-words-in-a-string/
//Submission url : https://leetcode.com/submissions/detail/1580557573/


class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        string result ="";
        stack<string> st;
        while(i<s.size()){
            string temp = "";
            while(s[i]==' ')
            i++;
            while(i!=s.size() && s[i]!=' '){
                temp+=s[i];
                i++;
            }
            st.push(temp);
            while(s[i]==' ')
            i++;
        }
        while(st.size()>0){
            result+=st.top();
            st.pop();
            if(st.size()!=0)
            result+=" ";
        }
        return result;
    }
};
