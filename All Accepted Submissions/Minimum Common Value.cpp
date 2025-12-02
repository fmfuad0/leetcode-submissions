//Author : https://leetcode.com/u/fmfuad/
//Title : Minimum Common Value
//Submission id : 1088614024
//Problem url : https://leetcode.com/problems/minimum-common-value/
//Submission url : https://leetcode.com/submissions/detail/1088614024/


class Solution {
public:


    bool isPresent(vector<int> &nums, int i)
        {
            int start=0, end=nums.size()-1;
            while(start<=end)
            {
                int mid=(start+end)/2;
                if(nums[mid]==i)
                    return true;
                else if(nums[mid]>i)
                    end=mid-1;
                else
                    start=mid+1;
            }
            return false;
        }
    int getCommon(vector<int>& nums1, vector<int>& nums2) 
    {
        for(auto i:nums1)
        {
            if(isPresent(nums2, i))
                return i;
        }
        return -1;
    }
};
