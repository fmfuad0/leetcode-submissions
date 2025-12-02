//Author : https://leetcode.com/u/fmfuad/
//Title : Remove Duplicates from Sorted Array II
//Submission id : 1583684351
//Problem url : https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
//Submission url : https://leetcode.com/submissions/detail/1583684351/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> found;
        int insertIndex = 1 ;
        found[nums[0]]++;
        int cnt=0;
        for(int i=1; i<nums.size(); i++){
            if(found[nums[i]]<2){
                found[nums[i]]++;
                if(found[nums[i]]>1)
                    cnt++;
                swap(nums[insertIndex], nums[i]);
                insertIndex++;
            }
        }
        return found.size()+cnt;
    }
};
