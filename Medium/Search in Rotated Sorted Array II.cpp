//Author : https://leetcode.com/u/fmfuad/
//Title : Search in Rotated Sorted Array II
//Submission id : 1088527777
//Problem url : https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
//Submission url : https://leetcode.com/submissions/detail/1088527777/


class Solution {
public:
    bool search(vector<int>& nums, int target) 
    {
        int middle=0;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i]>nums[i+1])
                middle=i;
        }
        bool found=false;
        int start=0, end=middle;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(nums[mid]==target)
            {
                found=true;
                break;
            }
            else if(nums[mid]>target)
                end=mid-1;
            else
                start=mid+1;   
        }
        start=middle+1;
        end=nums.size()-1;
        while(start<=end && !found)
        {
            int mid=(start+end)/2;
            if(nums[mid]==target)
            {
                found=true;
                break;
            }
            else if(nums[mid]>target)
                end=mid-1;
            else
                start=mid+1;   
        }
        return found;
    }
};
