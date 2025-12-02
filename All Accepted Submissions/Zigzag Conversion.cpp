//Author : https://leetcode.com/u/fmfuad/
//Title : Zigzag Conversion
//Submission id : 1420142933
//Problem url : https://leetcode.com/problems/zigzag-conversion/
//Submission url : https://leetcode.com/submissions/detail/1420142933/


class Solution {
public:
    string convert(string s, int numRows) 
    {
        string result="";
        int index=0;
        while(index<s.size())
        {
            result+=s[index];
            if(numRows==1)
                index++;
            index=index+2*(numRows-1);
            cout << index << " " << s.size() << endl;
        }
        cout << result << endl;
        for(int i=1; i<numRows-1 && i<s.size(); i++)
        {
            index=i;
            int diff=2*(numRows-i-1);
            bool ver=true;
            result+=s[index];
            while(index<s.size())
            {
                if(ver)
                {
                    index+=diff;
                    if(index>=s.size())
                        break;
                    result+=s[index];
                    ver=false;
                }
                else
                {
                    index+=i*2;
                    if(index>=s.size())
                        break;
                    result+=s[index];
                    ver=true;
                }
            }
            cout << result << endl;
        }
        index=numRows-1;
        while(index<s.size() && numRows!=1)
        {
            result+=s[index];
            index+=(numRows-1)*2;
            if(index>=s.size())
                break;
        }
        return result;
    }
};
