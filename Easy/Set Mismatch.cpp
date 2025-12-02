//Author : https://leetcode.com/u/fmfuad/
//Title : Set Mismatch
//Submission id : 1839740102
//Problem url : https://leetcode.com/problems/set-mismatch/
//Submission url : https://leetcode.com/submissions/detail/1839740102/


class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result(2);
        sort(nums.begin(), nums.end());
        int prev=nums[0];
        if(prev!=1)result[1]=1;
        for(int i=1; i<nums.size(); i++){
            int diff = nums[i]-prev;
            if(diff==0){
                result[0]=nums[i];
                if(result[1]!=0)return result;
            }
            else if(diff==2){
                result[1]=nums[i]-1;
                if(result[0]!=0)break;
            }
            prev=nums[i];
        }
        if(result[1]==0)result[1]=nums.size();
        return result;
    }
};
