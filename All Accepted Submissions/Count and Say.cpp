//Author : https://leetcode.com/u/fmfuad/
//Title : Count and Say
//Submission id : 999573040
//Problem url : https://leetcode.com/problems/count-and-say/
//Submission url : https://leetcode.com/submissions/detail/999573040/


class Solution {
public:

    string toString(int i, char ch) {
    std::stringstream ss;
    if(i==0)
        ss << ch;
    else
        ss << i;

    return ss.str();
}


string check(string demo)
{
    int cnt=1;
    string result;;
    if(demo.size()==1)
        return "11";
    for(int i=0; i<demo.size(); i++)
    {
        cnt=1;
        char ch=demo[i];
        for(int j=i+1; demo[j]==ch && j<demo.size(); j++)
        {
            cnt++;
            i=j;
        }
        
        string str=toString(cnt, ' ');
        result+=str;
        string str2=toString(0, ch);
        result+=str2;
    }
    return result;
}
string countAndSay(int n)
{
    if(n==1)
        return "1";
    string result="1";
    int cnt=0;
    int i=1;
    while(i<n)
    {
        result=check(result);
        i++;
    }
    return result;
}

};
