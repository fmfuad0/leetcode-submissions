//Author : https://leetcode.com/u/fmfuad/
//Title : Add Binary
//Submission id : 1842070033
//Problem url : https://leetcode.com/problems/add-binary/
//Submission url : https://leetcode.com/submissions/detail/1842070033/


class Solution {
public:
    string addBinary(string a, string b) {
        int sizeA=a.size();
        int sizeB=b.size();
        int limit = max(a.size(), b.size());
        string result="";
        bool remain=false;
        for(int i=0; i<=limit; i++){
            if(sizeA-1-i>=0){
                int x=stoi(a.substr(a.size()-1-i, 1));
                if(sizeB-1-i>=0){
                    int y=stoi(b.substr(b.size()-1-i, 1));
                    if(x&&y){
                        if(remain){result+="1";remain=true;}
                        else {result+="0";remain=true;}
                    }else if(x^y){if(remain)result+="0";else {result+="1";remain=false;}}
                    else{if(remain){result+="1";remain=false;}else{result+="0";}}
                }else{
                    cout << "Below\n";
                    if(remain&&x){result+="0"; remain=true;}
                    else if(remain ^ x){result+="1"; remain=false;}
                    else result+="0";
                }
            }else if(sizeB-1-i>=0){
                    int y=stoi(b.substr(b.size()-1-i, 1));
                    if(remain&&y){result+="0"; remain=true;}
                    else if(remain ^ y){result+="1"; remain=false;}
                    else result+="0";
            }
            else if(remain)result+="1";
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
