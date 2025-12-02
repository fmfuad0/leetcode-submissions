//Author : https://leetcode.com/u/fmfuad/
//Title : Spiral Matrix
//Submission id : 1842049338
//Problem url : https://leetcode.com/problems/spiral-matrix/
//Submission url : https://leetcode.com/submissions/detail/1842049338/


class Solution {
public:
    vector<int> result;
    int rCol=0, lCol=0, tRow=0, bRow=0, rows, cols;
    void goRight(vector<vector<int>> &matrix){
        int start = lCol;
        while(start<cols-rCol && result.size()<rows*cols){
            cout << matrix[tRow][start];
            result.push_back(matrix[tRow][start]);
            start++;
        }
        tRow++;
    }
    void goLeft(vector<vector<int>> &matrix){
        // cout << "Running\n";
        int start = cols-1-rCol;
        // cout << start << endl;
        while(start>=lCol && result.size()<rows*cols){
            cout << matrix[rows-1-bRow][start];
            result.push_back( matrix[rows-1-bRow][start]);
            start--;
        }
        bRow++;
    }
    void goUp(vector<vector<int>> &matrix){
        int start = rows-1-bRow;
        while(start>=bRow && result.size()<rows*cols){
            cout << matrix[start][lCol];
            result.push_back(matrix[start][lCol]);
            start--;
        }
        lCol++;
    }
    void goDown(vector<vector<int>> &matrix){
        int start = tRow;
        while(start<rows-bRow && result.size()<rows*cols){
            cout << matrix[start][cols-1-rCol];
            result.push_back( matrix[start][cols-1-rCol]);
            start++;
        }
        rCol++;
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        rows=matrix.size();cols=matrix[0].size();
        while(result.size()<rows*cols){
            goRight(matrix);
            goDown(matrix);
            goLeft(matrix);
            goUp(matrix);
        }
        
        return result;
    }
};
