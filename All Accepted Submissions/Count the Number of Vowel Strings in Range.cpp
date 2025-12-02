//Author : https://leetcode.com/u/fmfuad/
//Title : Count the Number of Vowel Strings in Range
//Submission id : 1148898951
//Problem url : https://leetcode.com/problems/count-the-number-of-vowel-strings-in-range/
//Submission url : https://leetcode.com/submissions/detail/1148898951/


class Solution {
public:
    bool isvowel(char a)
    {
        return (a=='a' || a=='e' || a=='i' || a=='o' || a=='u');

    }
    int vowelStrings(vector<string>& words, int left, int right) 
    {
        int result=0;
        for(left; left<=right; left++)
        {
            string temp=words[left];
            if(isvowel(temp[0]) && isvowel(temp[temp.size()-1]))
                result++;
        }
        return result;
    }
};
