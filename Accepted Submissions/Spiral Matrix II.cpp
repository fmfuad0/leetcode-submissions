//Author : https://leetcode.com/u/fmfuad/
//Title : Spiral Matrix II
//Submission id : 1583566967
//Problem url : https://leetcode.com/problems/spiral-matrix-ii/
//Submission url : https://leetcode.com/submissions/detail/1583566967/


class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       map<pair<int, int>, bool> visited;
       int val = 1, X=0, Y=0;
       char path = 'r';
       vector<vector<int>> result(n, vector<int>(n, 0));
       while(val<=n*n){
        switch(path){
            case 'r':{
                vector<int> temp;
                if(!visited[{X, Y}] && Y<n){
                    cout << X << Y << val << endl;
                    result[X][Y] = val;val++;
                    visited[{X,Y}] = true;
                    if(Y+1<n && !visited[{X,Y+1}])
                        Y++;
                    else{
                        X++;
                        path = 'd';
                    }
                }
                break;
            }
            case 'l':{
                vector<int> temp;
                if(!visited[{X, Y}] && Y>=0){
                    cout << X << Y << val << endl;
                    result[X][Y] = val;val++;
                    visited[{X,Y}] = true;
                    if(Y-1>=0 && !visited[{X,Y-1}])
                        Y--;
                    else{
                        X--;
                        path = 'u';
                    }
                }
                break;
            }
            case 'u':{
                vector<int> temp;
                if(!visited[{X, Y}] && X>=0){
                    cout << X << Y << val << endl;
                    result[X][Y] = val;val++;
                    visited[{X,Y}] = true;
                    if(X-1>=0 && !visited[{X-1,Y}])
                        X--;
                    else{
                        Y++;
                        path = 'r';
                    }
                }
                
                break;
            }
            case 'd':{
                vector<int> temp;
                if(!visited[{X, Y}] && X>=0){
                    cout << X << Y << val << endl;
                    result[X][Y] = val;val++;
                    visited[{X,Y}] = true;
                    if(X+1<n && !visited[{X+1,Y}])
                        X++;
                    else{
                        Y--;
                        path = 'l';
                    }
                }

                break;
            }
            
        }
       }
       return result;
    }
};
