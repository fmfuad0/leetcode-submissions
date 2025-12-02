//Author : https://leetcode.com/u/fmfuad/
//Title : Plus One
//Submission id : 1160391853
//Problem url : https://leetcode.com/problems/plus-one/
//Submission url : https://leetcode.com/submissions/detail/1160391853/


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int rem=1;
        int i=digits.size()-1;
        while(i>=0)
        {
            if(digits[i]+rem>9)
            {
                digits[i]=0;
                if(i==0)
                {
                    digits[i]=1;
                    digits.push_back(0);
                }
                i--;
            }
            else
            {
                digits[i]+=1;
                break;
            }
        }
        return digits;
    }
};
