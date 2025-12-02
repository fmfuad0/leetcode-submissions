//Author : https://leetcode.com/u/fmfuad/
//Title : Kth Largest Element in an Array
//Submission id : 1583720676
//Problem url : https://leetcode.com/problems/kth-largest-element-in-an-array/
//Submission url : https://leetcode.com/submissions/detail/1583720676/


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()-k];
    }
};
