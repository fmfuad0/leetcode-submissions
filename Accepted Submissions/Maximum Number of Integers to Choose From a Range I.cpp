//Author : https://leetcode.com/u/fmfuad/
//Title : Maximum Number of Integers to Choose From a Range I
//Submission id : 1148906373
//Problem url : https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i/
//Submission url : https://leetcode.com/submissions/detail/1148906373/


class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) 
    {
        sort(banned.begin(), banned.end());
        int result=0;
        int sum=0;
        int digit=1;
        while(sum<maxSum && digit<=n)
        {
            if(find(banned.begin(), banned.end(), digit)==banned.end())
            {
                if(sum+digit<=maxSum)
                {
                    sum+=digit;
                    result++;
                }
                else
                    break;
                
            }
            digit++;
        }
        return result;
    }
};
