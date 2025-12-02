//Author : https://leetcode.com/u/fmfuad/
//Title : Shuffle the Array
//Submission id : 1839717879
//Problem url : https://leetcode.com/problems/shuffle-the-array/
//Submission url : https://leetcode.com/submissions/detail/1839717879/


class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result(2*n);
        for(int i=0; i<nums.size()/2; i++){
            result[2*i]=nums[i];
            result[2*i+1]=nums[i+n];
        }
        return result;
    }
};
