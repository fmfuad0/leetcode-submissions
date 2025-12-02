//Author : https://leetcode.com/u/fmfuad/
//Title : Minimum Operations to Make Array Sum Divisible by K
//Submission id : 1842664450
//Problem url : https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/
//Submission url : https://leetcode.com/submissions/detail/1842664450/


class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long sum =0;
        for(auto i:nums){
            sum+=i;
        }
        return sum%k;
        
    }
};
