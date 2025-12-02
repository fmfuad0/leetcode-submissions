//Author : https://leetcode.com/u/fmfuad/
//Title : Search Insert Position
//Submission id : 1017526348
//Problem url : https://leetcode.com/problems/search-insert-position/
//Submission url : https://leetcode.com/submissions/detail/1017526348/


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int start=0, end=nums.size()-1;
        int positionR, positionL;
        bool R=false, L=false;
        while(start<=end)    
        {
            int mid=(start+end)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                R=true;
                positionR=mid;
                end=mid-1;
            }
            else
            {
                L=true;
                positionL=mid;
                start=mid+1;
            }
        }
        if(R==true) 
        {
            if(L==true)
                return positionR;
            else
                return 0;
        }
        else
            return nums.size(); 
    }
};
