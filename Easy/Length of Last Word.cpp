//Author : https://leetcode.com/u/fmfuad/
//Title : Length of Last Word
//Submission id : 1032543760
//Problem url : https://leetcode.com/problems/length-of-last-word/
//Submission url : https://leetcode.com/submissions/detail/1032543760/


class Solution {
public:
    int lengthOfLastWord(string s) {
        int size=s.size();
        bool ch=false;
        int cnt=0;
        for(int i=size-1 ; i>=0; i--)
        {
            if(s[i]==' ')
            {
                if(ch)
                    return cnt;
            }
            else
            {
                ch=true;
                cnt++;
            }
        }
        return cnt;
    }
};
