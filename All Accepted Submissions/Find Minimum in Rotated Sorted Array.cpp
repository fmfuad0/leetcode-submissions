//Author : https://leetcode.com/u/fmfuad/
//Title : Find Minimum in Rotated Sorted Array.cpp
//Submission id : 1844498044
//Problem url : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
//Submission url : https://leetcode.comhttps://leetcode.com/submissions/detail/1844498044/


class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0, end=nums.size()-1;
        int result=INT_MAX;
        while(start<=end) {
            int mid=(start+end)/2;
            result=min(result, nums[mid]);
            if(nums[mid]>nums[nums.size()-1])start=mid+1;
            else end=mid-1;
        }
        return result;
    }
};
