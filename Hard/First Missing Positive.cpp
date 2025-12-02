//Author : https://leetcode.com/u/fmfuad/
//Title : First Missing Positive
//Submission id : 1841838060
//Problem url : https://leetcode.com/problems/first-missing-positive/
//Submission url : https://leetcode.com/submissions/detail/1841838060/


class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ans =1;
        sort(nums.begin(), nums.end());
        for(auto i :nums)cout << i << " ";
        cout << endl;
        auto i = lower_bound(nums.begin(), nums.end(), 1)-nums.begin();
        for(i; i<nums.size(); i++){
            if(nums[i]==ans)ans++;
            else if(nums[i]>ans) break;
        }
        return ans;
    }
};
