//Author : https://leetcode.com/u/fmfuad/
//Title : Search in Rotated Sorted Array
//Submission id : 1002174764
//Problem url : https://leetcode.com/problems/search-in-rotated-sorted-array/
//Submission url : https://leetcode.com/submissions/detail/1002174764/


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index;
        vector<int>::iterator it=find(nums.begin(), nums.end(),target);
        if(it!=nums.end())
        {
            index=it-nums.begin() ;
            return index;
        }
        else
            return -1;
    }
};
