//Author : https://leetcode.com/u/fmfuad/
//Title : Two Sum
//Submission id : 1016881851
//Problem url : https://leetcode.com/problems/two-sum/
//Submission url : https://leetcode.com/submissions/detail/1016881851/


class Solution {
public:

    int ifPresent(vector<int> &nums, long long int target)
{
    vector<int>::iterator it;
    it=find(nums.begin(), nums.end(), target);
    if(it!=nums.end())
    {
        int index=it-nums.begin();
        return index;
    }
    return -1;
}
vector<int> twoSum(vector<int>& nums, int target)
{
    vector<int> result;
    for(int i=0; i<nums.size(); i++)
    {
        long long int req=target-nums[i];
        long long int temp=nums[i];
        nums[i]=req+1;
        int targetIndex=ifPresent(nums, req);
        if(targetIndex!=-1)
        {
            result.push_back(i);
            result.push_back(targetIndex);
            return result;
        }
        nums[i]=temp;
    }
    return result;
}
};
