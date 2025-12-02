//Author : https://leetcode.com/u/fmfuad/
//Title : Unique Paths II
//Submission id : 1838895103
//Problem url : https://leetcode.com/problems/unique-paths-ii/
//Submission url : https://leetcode.com/submissions/detail/1838895103/


class Solution {
public:
long double arr[105][105] ;
long double obstacle = 0;
void prepareMatrix(vector<vector<int>> &obstacleGrid){
    int h=obstacleGrid.size();
    int w=obstacleGrid[0].size();
    for(int i=100; i>100-h; i--){
            int xDiff = 100-i;
            int xIndex = h-1-xDiff; 
            if(xIndex<0)break;
            for(int j=100; j>100-w; j--){
                if(i!=100 || j!=100){
                    int yDiff = 100-j;
                    int yIndex = w-1-yDiff;
                    if(yIndex<0)break; 
                    if(obstacleGrid[xIndex][yIndex])arr[i][j]=0;
                    else arr[i][j]=arr[i+1][j]+arr[i][j+1];
                }else
                    if(obstacleGrid[h-1][w-1])arr[i][j]=0;
        }
    }
    // cout << endl;
    // for (int i = 1; i <=100; ++i)
    // {
    //     for (int j = 1; j <=100; ++j)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        arr[100][100]=1;
        prepareMatrix(obstacleGrid);
        return arr[100-obstacleGrid.size()+1][100-obstacleGrid[0].size()+1];
    }
};
