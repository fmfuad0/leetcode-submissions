//Author : https://leetcode.com/u/fmfuad/
//Title : Sort Colors
//Submission id : 1087099812
//Problem url : https://leetcode.com/problems/sort-colors/
//Submission url : https://leetcode.com/submissions/detail/1087099812/


class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int zero=0, one=0, two=0;
        for(auto i:nums)
        {
            if(i==1)
                one++;
            else if(i==2)
                two++;
            else
                zero++;
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(i<zero)
                nums[i]=0;
            else if(i<zero+one)
                nums[i]=1;
            else
                nums[i]=2;
        }
    }
};
