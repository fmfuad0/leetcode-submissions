//Author : https://leetcode.com/u/fmfuad/
//Title : Best Time to Buy and Sell Stock
//Submission id : 1043255016
//Problem url : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
//Submission url : https://leetcode.com/submissions/detail/1043255016/


class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        map<int, int> mapp;
        int maxi=0;
        int result=0;
        int mini=prices.front();
        for(auto i:prices) 
        {
            if(i<mini)
            {
                mini=i;
            }
            else
            {
                result=max(result, i-mini);
            }
        }
        return result;
    }
};
