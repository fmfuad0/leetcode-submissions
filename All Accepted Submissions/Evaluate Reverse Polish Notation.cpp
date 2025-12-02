//Author : https://leetcode.com/u/fmfuad/
//Title : Evaluate Reverse Polish Notation.cpp
//Submission id : 1844493882
//Problem url : https://leetcode.com/problems/evaluate-reverse-polish-notation/
//Submission url : https://leetcode.comhttps://leetcode.com/submissions/detail/1844493882/


class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto i:tokens){
            if(i!="+" && i!="-" && i!="*" && i!="/")st.push(stoi(i));
            else{
                cout << st.top();
                int a = st.top();
                st.pop();
                cout << " " << st.top() << endl;
                int b = st.top();
                st.pop();
                if(i=="+"){st.push(b+a);}
                else if(i=="-")st.push(b-a);
                else if(i=="*")st.push(b*a);
                else if(i=="/")st.push(b/a);
                cout << st.top() << endl;
            }
        }
        return st.top();
    }
};
