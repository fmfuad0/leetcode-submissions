//Author : https://leetcode.com/u/fmfuad/
//Title : Sqrt(x)
//Submission id : 1842073551
//Problem url : https://leetcode.com/problems/sqrtx/
//Submission url : https://leetcode.com/submissions/detail/1842073551/


class Solution {
public:

    int mySqrt(int x) {
        if(x==0)return 0;
        if(x<=3)return 1;
        long long result =0;
        long long start=2, end=x/2;
        while(start<=end){
            long long mid=(start+end)/2;
            if(mid*mid<=x){result=max(result, mid);start=mid+1;}
            else end=mid-1;
        }
        return result;

    }
};
