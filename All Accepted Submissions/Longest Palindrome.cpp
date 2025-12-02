//Author : https://leetcode.com/u/fmfuad/
//Title : Longest Palindrome
//Submission id : 1017026196
//Problem url : https://leetcode.com/problems/longest-palindrome/
//Submission url : https://leetcode.com/submissions/detail/1017026196/


class Solution {
public:
    int longestPalindrome(string s)
    {
        array<int, 100> freq= {0};
        map<int, int> cnt;
        for(auto i:s)
        {
            freq[i-65]++;
        }
        for(int i=0; i<freq.size(); i++)
        {
            if(freq[i]!=0)
                cnt[freq[i]]++;
        }
        int result=0;
        int tmp=0;
        for(auto i:cnt)
        {
            if(i.first%2==0)
                result+=i.first*i.second;
            else
            {
                tmp++;
                if(tmp<2)
                    result+=i.first*i.second-(i.second-1);
                else
                {
                    result+=(i.first*i.second)-i.second;
                }

            }
        }
        return result;
    }
};
