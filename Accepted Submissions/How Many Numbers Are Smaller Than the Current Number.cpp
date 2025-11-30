//Author : https://leetcode.com/u/fmfuad/
//Title : How Many Numbers Are Smaller Than the Current Number
//Submission id : 1839747111
//Problem url : https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
//Submission url : https://leetcode.com/submissions/detail/1839747111/


class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> demo=nums;
        vector<int> result;
        sort(demo.begin(), demo.end());
        for(auto i:nums){
            result.push_back(lower_bound(demo.begin(), demo.end(), i)-demo.begin());
        }
        return result;
    }
};
