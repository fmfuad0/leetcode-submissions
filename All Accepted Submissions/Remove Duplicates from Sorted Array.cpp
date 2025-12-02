//Author : https://leetcode.com/u/fmfuad/
//Title : Remove Duplicates from Sorted Array
//Submission id : 1017502537
//Problem url : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
//Submission url : https://leetcode.com/submissions/detail/1017502537/


class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        return (distance(v.begin(),unique(v.begin(), v.begin() + v.size())));;
    }
};
