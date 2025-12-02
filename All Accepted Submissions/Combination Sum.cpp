//Author : https://leetcode.com/u/fmfuad/
//Title : Combination Sum
//Submission id : 1841815577
//Problem url : https://leetcode.com/problems/combination-sum/
//Submission url : https://leetcode.com/submissions/detail/1841815577/


class Solution {
public:
    vector<vector<int>> result;
    void findSum(int val, vector<int> &candidates, vector<int> &nums){
    
    cout << "Finding : " << val << endl;

    for(auto i: candidates){
        if(i == val){
            nums.push_back(i);
            vector<int> tmp = nums;
            sort(tmp.begin(), tmp.end());
            if(find(result.begin(), result.end(), tmp) == result.end()){
                result.push_back(tmp);
            }
            nums.pop_back();
        }
        else if(i < val){
            nums.push_back(i);
            findSum(val - i, candidates, nums);
            nums.pop_back();  
        }
    }
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        for(auto i:candidates){
            if(i==target){result.push_back({i});continue;}
            if(i>target)continue;
            vector<int> nums;
            nums.push_back(i);
            findSum(target-i, candidates, nums);
        }
        return result;
    }
};
