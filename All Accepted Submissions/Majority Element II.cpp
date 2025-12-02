//Author : https://leetcode.com/u/fmfuad/
//Title : Majority Element II
//Submission id : 1584082047
//Problem url : https://leetcode.com/problems/majority-element-ii/
//Submission url : https://leetcode.com/submissions/detail/1584082047/


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> mapp;
        vector<int> result;
        for(auto i:nums){
            mapp[i]++;
            if(mapp[i]>(nums.size()/3)){
                if(find(result.begin(),result.end(), i)==result.end())
                    result.push_back(i);
            }
        }
        return result;
    }
};
