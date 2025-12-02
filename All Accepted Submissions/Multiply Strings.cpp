//Author : https://leetcode.com/u/fmfuad/
//Title : Multiply Strings
//Submission id : 1841951068
//Problem url : https://leetcode.com/problems/multiply-strings/
//Submission url : https://leetcode.com/submissions/detail/1841951068/


class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0")return "0";
        string result = "";
        vector<string> v;
        for(int i=num1.size()-1; i>=0; i--){
            int remain=0;
            string mulResult = "";
            for(int j=num2.size()-1; j>=0; j--){
                int mul = stoi(num1.substr(i, 1))*stoi(num2.substr(j, 1))+remain;
                if(j==0){
                    string temp = to_string(mul);
                    reverse(temp.begin(), temp.end());
                    mulResult.append(temp);
                    reverse(mulResult.begin(), mulResult.end());
                    if(i!=num1.size()-1){
                        int diff = num1.size()-1-i;
                        while(diff--)mulResult.append("0");
                    }
                    v.push_back(mulResult);
                }else{
                    mulResult.append(to_string(mul%10));
                    remain=mul/10;
                }
            }
        }
        int remain=0;
        for(int i=0; i<v[v.size()-1].size(); i++){
            int sum=0;
            for(int j=v.size()-1; j>=0; j--){
                int size = v[j].size();
                if(size-1-i<0)break;
                string digit=v[j].substr(size-1-i, 1);
                sum += stoi(digit);
            }
            sum+=remain;
            cout << i << " " << sum << endl;
            string temp=to_string(sum);
            if(i==v[v.size()-1].size()-1){reverse(temp.begin(), temp.end());result.append(temp);}
            else{
                result.append(to_string(sum%10));
                remain=sum/10;
            }
        }
        cout << result << endl;
        reverse(result.begin(), result.end());
        return result;
    }
};
