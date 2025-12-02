//Author : https://leetcode.com/u/fmfuad/
//Title : Intersection of Two Arrays
//Submission id : 1088609380
//Problem url : https://leetcode.com/problems/intersection-of-two-arrays/
//Submission url : https://leetcode.com/submissions/detail/1088609380/


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> result;
        map<int, bool> mapp;
        for(auto i:nums1)    
        {
            if(find(nums2.begin(), nums2.end(), i)!=nums2.end() && !mapp[i])
            {
                result.push_back(i);
                mapp[i]=true;
            }
        }
        return result;
    }
};
