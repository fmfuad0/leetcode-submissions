//Author : https://leetcode.com/u/fmfuad/
//Title : Simplify Path
//Submission id : 1421293728
//Problem url : https://leetcode.com/problems/simplify-path/
//Submission url : https://leetcode.com/submissions/detail/1421293728/


class Solution {
public:
    string simplifyPath(string path) 
    {
        stack<string> st;
        string dir="";
        string result="/";
        for(int i=0; i<path.size(); i++)
        {
            bool ver=false;
             if(path[i]=='/')
             {
                ver=true;
                while(path[i+1]=='/')
                    i++;
                
             }
             else if(path[i]=='.')
             {

                string tmp="";
                tmp+=path[i];
                i++;
                while(path[i]!='/' &&  i!=path.size())
                {
                    tmp+=path[i];
                    i++;
                }
                if(tmp.size()==1)
                    continue;
                else if(tmp.size()==2 && tmp[0]==tmp[1])
                {
                    ver=true;
                    if(result.size()>1)
                    {
                        int x=result.size()-1;
                        while(result[x]!='/')
                            x--;
                        result=result.substr(0, x);
                        // int x=st.top().size();
                        // cout << st.top() << endl;
                        // st.pop();
                        // result=result.substr(0, result.size()-x-1);
                        if(result=="")
                            result="/";
                    }
                    // cout << result << endl;
                }
                else
                {
                    dir+=tmp;
                }
                // cout << dir << endl;
             }
             else
             {
                while(path.substr(i, 1)!="/")
                {
                    dir+=path.substr(i, 1);
                    i++;
                    if(i==path.size())
                        break;
                }
             }
             st.push(dir);
             if(result.size()>1 && !ver)
                result+="/";
             result+=dir;
             cout << result << endl;
             dir="";
        }
        if(result[result.size()-1]=='/' && result.size()!=1)
            result.resize(result.size()-1);
        return result;
    }
};
