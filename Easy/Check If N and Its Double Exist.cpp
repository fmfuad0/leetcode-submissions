//Author : https://leetcode.com/u/fmfuad/
//Title : Check If N and Its Double Exist
//Submission id : 1088622059
//Problem url : https://leetcode.com/problems/check-if-n-and-its-double-exist/
//Submission url : https://leetcode.com/submissions/detail/1088622059/


class Solution {
public:
    bool isPresent(vector<int> &nums, int index)
    {
        int i=nums[index]*2;
        int start, end;
        if(nums[index]>=0)
            start=index+1, end=nums.size()-1;
        else
            end=index-1, start=0;
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
    bool checkIfExist(vector<int>& arr) 
    {
        sort(arr.begin(), arr.end());
        for(int i=0; i<arr.size(); i++)
        {
            if(isPresent(arr, i))
                return true;
        }
        return false;
    }
};
