//Author : https://leetcode.com/u/fmfuad/
//Title : Max Consecutive Ones
//Submission id : 1839721134
//Problem url : https://leetcode.com/problems/max-consecutive-ones/
//Submission url : https://leetcode.com/submissions/detail/1839721134/


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int result=0;
        int value=0;
        while(i<nums.size()){
            if(nums[i]==1){value++;result=max(result, value);}
            else value=0;
            i++;
        }
        return result;
    }
};

