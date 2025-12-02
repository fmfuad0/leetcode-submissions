//Author : https://leetcode.com/u/fmfuad/
//Title : Find the K-th Character in String Game I
//Submission id : 1842671072
//Problem url : https://leetcode.com/problems/find-the-k-th-character-in-string-game-i/
//Submission url : https://leetcode.com/submissions/detail/1842671072/


class Solution {
public:
    char kthCharacter(int k) {
        string word="a";
        while(word.size()<k){
            string temp = word;
            for(auto i:temp){
                word+=++i;
            }
                cout << word << endl;
        }
    return word[k-1];
    }
};
