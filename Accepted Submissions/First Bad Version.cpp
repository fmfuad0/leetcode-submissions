//Author : https://leetcode.com/u/fmfuad/
//Title : First Bad Version
//Submission id : 1017538814
//Problem url : https://leetcode.com/problems/first-bad-version/
//Submission url : https://leetcode.com/submissions/detail/1017538814/


// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        long long int start=1, end=n;
        long long int right=n;
        while(start<=end)
        {
            long long int mid=(start+end)/2;
            if(isBadVersion(mid))
            {
                right=min(mid, right);
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return right;
    }
};
