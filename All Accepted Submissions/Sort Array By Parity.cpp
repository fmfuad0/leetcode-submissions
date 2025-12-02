//Author : https://leetcode.com/u/fmfuad/
//Title : Sort Array By Parity
//Submission id : 1061239333
//Problem url : https://leetcode.com/problems/sort-array-by-parity/
//Submission url : https://leetcode.com/submissions/detail/1061239333/


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        bool found=false;
        int odd=0, even=nums.size()-1;
        while(nums[odd]%2==0 && odd<(nums.size()-1))
            odd++;
        while(nums[even]%2!=0 && even>0)
            even--;
        cout << even << odd;
        while(odd<even)
        {
            if(nums[odd]%2==1)
            {
                swap(nums[odd], nums[even]);
                while(nums[odd]%2==0 && odd<(nums.size()-1))
                    odd++;
                while(nums[even]%2!=0 && even>0)
                    even--;
            }
        }
        return nums;
    }
};
