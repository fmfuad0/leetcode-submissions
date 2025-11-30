//Author : https://leetcode.com/u/fmfuad/
//Title : Longest Substring Without Repeating Characters
//Submission id : 1016829899
//Problem url : https://leetcode.com/problems/longest-substring-without-repeating-characters/
//Submission url : https://leetcode.com/submissions/detail/1016829899/


class Solution {
public:
    int lengthOfLongestSubstring(string s)
{
    int result=0, length=0;
    if(s.empty())
        return 0;
    if(s.size()==1)
        return 1;
    array<int, 100> arr;                    
    arr.fill(-1);
    int index=0;
    string::iterator i=s.begin();
    while(i!=s.end())
    {
        //cout << i-s.begin() << endl;
        if(arr[*i-32]==-1)
        {
            length++;
            arr[*i-32]=i-s.begin();
        }
        else
        {
            //cout << *i << " found .." << endl;
            result=max(length, result);
            int start=arr[*i-32];
            arr.fill(-1);
            //arr[*i-32]=i-s.begin();
            i=s.begin()+start;
            length=0;
        }
        i++;
    }
    result=max(length, result);
    return result;
}
};
