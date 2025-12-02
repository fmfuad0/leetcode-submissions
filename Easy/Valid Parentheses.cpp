//Author : https://leetcode.com/u/fmfuad/
//Title : Valid Parentheses
//Submission id : 1043239812
//Problem url : https://leetcode.com/problems/valid-parentheses/
//Submission url : https://leetcode.com/submissions/detail/1043239812/


class Solution {
public:
    bool isValid(string x) {
        stack<char> st;
        if(x.size()==1)
            return false;
        bool changed=false;
        for(auto i:x)
        {
            cout << i << " " ;
            if(i=='(')
                st.push(')');
            else if(i=='{')
                st.push('}');
            else if(i=='[')
                st.push(']');
            else
            {
                changed=true;
                if(st.size()==0 || st.top()!=i )
                {
                    return false;
                }
                else
                    st.pop();
            }
        }
        if(changed && st.size()==0)
            return true;
        else
            return false; 
    }
};
