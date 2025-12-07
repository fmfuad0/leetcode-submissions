//Author : https://leetcode.com/u/fmfuad/
//Title : Two Sum II - Input Array Is Sorted.cpp
//Submission id : 1847029531
//Problem url : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
//Submission url : https://leetcode.comhttps://leetcode.com/submissions/detail/1847029531/


class Solution {
public:
    int index ;
    bool isPresent(int d, int start, int end, vector<int> &numbers){
        while(start<=end){
            int mid=(start+end)/2;
            if(numbers[mid]==d){index = mid;return true;}
            else if(numbers[mid]<d)start=mid+1;
            else end=mid-1;
        }
        return false;
    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        for(int i=0; i<numbers.size(); i++){
            int d=target-numbers[i];
            int start, end;
            if(d<numbers[i]){start=0; end=i-1;}
            else{start=i+1; end=numbers.size()-1;}
            if(isPresent(d, start, end, numbers)){result = {i+1, index+1};break;}
        }
        return result;
    }
};

