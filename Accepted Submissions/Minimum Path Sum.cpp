//Author : https://leetcode.com/u/fmfuad/
//Title : Minimum Path Sum
//Submission id : 1838935305
//Problem url : https://leetcode.com/problems/minimum-path-sum/
//Submission url : https://leetcode.com/submissions/detail/1838935305/


class Solution {
public:
    long double arr[205][205];

    int minPathSum(vector<vector<int>>& grid) {
        arr[200][200]=grid[grid.size()-1][grid[0].size()-1];
        int xI=grid.size()-1-1, yI=grid[0].size()-1-1;
        for(int i=199; i>=200-grid.size() && xI>=0; i--){
            arr[i][200]=arr[i+1][200] + grid[xI][grid[0].size()-1];
            xI--;
        }
        for(int i=199; i>=200-grid[0].size() && yI>=0; i--){
            cout << arr[200][i+1] << " " << grid[grid.size()-1][yI] << endl;
            arr[200][i]=arr[200][i+1] + grid[grid.size()-1][yI];
            yI--;
        }

        xI=grid.size()-2;yI=grid[0].size()-2;
        for(int i=xI; i>=0; i--){
            int arrX = 200-grid.size()+1+i;
            for(int j=yI; j>=0; j--){
                int arrY = 200-grid[0].size()+1+j;
                arr[arrX][arrY] = grid[i][j] + min(arr[arrX][arrY+1], arr[arrX+1][arrY]);
            }
        }
        
        for(int i=200-grid.size(); i<=200; i++){
            for(int j=200-grid[0].size(); j<=200; j++)
                cout << arr[i][j] << " ";
            cout <<endl;
        }
        return arr[200-grid.size()+1][200-grid[0].size()+1];
    }
};
