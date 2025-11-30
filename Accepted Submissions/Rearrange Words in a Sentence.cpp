//Author : https://leetcode.com/u/fmfuad/
//Title : Rearrange Words in a Sentence
//Submission id : 1580574276
//Problem url : https://leetcode.com/problems/rearrange-words-in-a-sentence/
//Submission url : https://leetcode.com/submissions/detail/1580574276/


class Solution {
public:
    string arrangeWords(string text) {
        map<int, vector<string>> mp;
        int i=0;
        while(i<text.size()){
            string temp = "";
            while(text[i]==' ')
            i++;
            while(i!=text.size() && text[i]!=' '){
                temp+=text[i];
                i++;
            }
            while(text[i]==' ')
            i++;
            temp[0] = tolower(temp[0]);
            mp[temp.size()].push_back(temp);
        }
        string result ="";
        bool ver=false;
        for(auto i:mp){
            cout << i.first << endl;
            for(auto j:i.second){
                string str = j;
                if(!ver){
                    str[0] = toupper(str[0]);
                    ver=true;
                }
                result+=str;
                result+=" ";
            }
        }
        result.pop_back();
        return result;
    }
};
