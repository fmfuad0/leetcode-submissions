//Author : https://leetcode.com/u/fmfuad/
//Title : Valid Sudoku
//Submission id : 1602485725
//Problem url : https://leetcode.com/problems/valid-sudoku/
//Submission url : https://leetcode.com/submissions/detail/1602485725/


class Solution {
public:

    bool isValidSudoku(vector<vector<char>>& board) {
        map<int, map<char, bool>> rowFreq;
        map<int, map<char, bool>> colFreq;
        map<int, map<char, bool>> subFreq;
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                char ch = board[i][j];
                if(ch!='.'){
                    int x=0, y=1;
                    if(i>2 && i<6)
                        x=3;
                    if(i>5)
                        x=6;
                    if(j>2 && j<6)
                        y=2;
                    if(j>5)
                        y=3;
                        cout << ch << endl;
                    for(auto i:rowFreq){
                        cout<< "ROW: " << i.first << endl;
                        for(auto j:i.second){
                            cout << j.first << "->" << j.second << endl;
                        }
                    }
                    if(subFreq[x+y][ch])return false;
                    subFreq[x+y][ch]=true;
                    if(rowFreq[i][ch])return false;
                    rowFreq[i][ch]=true;
                    if(colFreq[j][ch])return false;
                    colFreq[j][ch]=true;
                    
                }
            }
        }
        return true;
    }
};
