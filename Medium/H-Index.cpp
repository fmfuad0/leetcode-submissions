//Author : https://leetcode.com/u/fmfuad/
//Title : H-Index
//Submission id : 1602505159
//Problem url : https://leetcode.com/problems/h-index/
//Submission url : https://leetcode.com/submissions/detail/1602505159/


class Solution {
public:

    int countGreaterOrEqual(vector<int>& arr, int target) {
    auto it = lower_bound(arr.begin(), arr.end(), target);
    return arr.end() - it;
}
    int hIndex(vector<int>& citations) {
        int start = 0, end=citations.size();
        int result = 0;
        sort(citations.begin(), citations.end());
        while(start<=end){
            int mid = (start+end)/2;
            int count = countGreaterOrEqual(citations, mid);
            cout << mid << "  " << count << endl;
            if(count>=mid && mid>=result){
                result=mid;
                start=mid+1;
            }else
                end=mid-1;
        }
        return result;
    }
};
