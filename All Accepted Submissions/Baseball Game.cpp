//Author : https://leetcode.com/u/fmfuad/
//Title : Baseball Game
//Submission id : 996811835
//Problem url : https://leetcode.com/problems/baseball-game/
//Submission url : https://leetcode.com/submissions/detail/996811835/


class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> sta;
        for(auto i: operations)
        {
            if(i=="+")
            {
                int top;
                int sum;
                top=sta.top();
                sta.pop();
                sum=top+sta.top();
                sta.push(top);
                sta.push(sum);
            }
            else if(i=="D")
            {
                int top=sta.top();
                sta.push(top*2);
            }
            else if(i=="C")
                sta.pop();
            else
            {
                int digit;
                digit=stoi(i);
                sta.push(digit);
            }
        }
        int result=0;
        while(!sta.empty())
        {
            result+=sta.top();
            sta.pop();
        }
        return result;
    }
};
