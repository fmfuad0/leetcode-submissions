//Author : https://leetcode.com/u/fmfuad/
//Title : Unique Number of Occurrences
//Submission id : 1148784372
//Problem url : https://leetcode.com/problems/unique-number-of-occurrences/
//Submission url : https://leetcode.com/submissions/detail/1148784372/


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr)
{
    map<int, int> freq;
    map<int, bool> track;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; i++)
    {
        freq[arr[i]]++;
        if (arr[i + 1] != arr[i])
        {
            if (track[freq[arr[i]]] || ((track[1] || freq[arr[i]] == 1) && i == arr.size() - 2))
                return false;
            else
                track[freq[arr[i]]] = true;
        }
        else if (i == arr.size() - 2)
        {
            if (track[freq[arr[i]] + 1])
                return false;
            else
                return true;
        }
    }
    return true;
}

};
