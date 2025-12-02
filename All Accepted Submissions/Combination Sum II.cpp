//Author : https://leetcode.com/u/fmfuad/
//Title : Combination Sum II
//Submission id : 1841830645
//Problem url : https://leetcode.com/problems/combination-sum-ii/
//Submission url : https://leetcode.com/submissions/detail/1841830645/


class Solution {
public:
    vector<vector<int>> result;
    map<int, int> mapp;
    void findSum(int val, vector<int> &candidates, vector<int> &nums, map<int, int> &freq){

        for(auto i: candidates){
            if(freq[i]<mapp[i]){
                if(i == val){
                    nums.push_back(i);
                    freq[i]++;
                    vector<int> tmp = nums;
                    sort(tmp.begin(), tmp.end());
                    if(find(result.begin(), result.end(), tmp) == result.end()){
                        result.push_back(tmp);
                    }
                    nums.pop_back();
                    freq[i]--;
                }
                else if(i < val){
                    nums.push_back(i);
                    freq[i]++;
                    findSum(val - i, candidates, nums, freq);
                    nums.pop_back();
                    freq[i]--;
                }
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        for(auto i:candidates)mapp[i]++;
        sort(candidates.begin(), candidates.end());
        auto it = unique(candidates.begin(), candidates.end()); 
        candidates.erase(it, candidates.end()); 
        for(auto i:candidates){
            if(i==target)result.push_back({i});
            else if(i<target){
                map<int, int> freq;
                vector<int> nums;
                nums.push_back(i);
                freq[i]++;
                findSum(target-i, candidates, nums, freq);
            }
        }
        sort(result.begin(), result.end());
        auto it2 = unique(result.begin(), result.end()); 
        result.erase(it2, result.end()); 
        return result;

    }
};
