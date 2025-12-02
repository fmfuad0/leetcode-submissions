//Author : https://leetcode.com/u/fmfuad/
//Title : Concatenation of Array
//Submission id : 1839711334
//Problem url : https://leetcode.com/problems/concatenation-of-array/
//Submission url : https://leetcode.com/submissions/detail/1839711334/


class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result(2*nums.size());
        for(int i=0; i<nums.size(); i++){
            result[i]=nums[i];
            result[i+nums.size()]=nums[i];
        }
        return result;
    }
};
