//Author : https://leetcode.com/u/fmfuad/
//Title : Min Stack.cpp
//Submission id : 1844507940
//Problem url : https://leetcode.com/problems/min-stack/
//Submission url : https://leetcode.comhttps://leetcode.com/submissions/detail/1844507940/


class MinStack {
public:
    stack<int> st;
    stack<int> m;
    map<int, int> mapp;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.size()==0 || m.top()>val)m.push(val);
        st.push(val);
        mapp[val]++;
    }
    
    void pop() {
        mapp[st.top()]--;
        st.pop();
        while(m.size() && mapp[m.top()]==0){m.pop();}
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return m.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
