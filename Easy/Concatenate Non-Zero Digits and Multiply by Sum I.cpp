//Author : https://leetcode.com/u/fmfuad/
//Title : Concatenate Non-Zero Digits and Multiply by Sum I
//Submission id : 1839629184
//Problem url : https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/
//Submission url : https://leetcode.com/submissions/detail/1839629184/


class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum =0;
        long long result=0;
        int cc=0;
        while(n>0){
            int digit = n%10;
            sum+=digit;
            if(digit!=0){
                result+=digit*pow(10,cc);
                cc++;
            }
            n/=10;
        }
        if(sum==0)return 0;
        cout << result*sum << endl;
        return result*sum;
    }
};
