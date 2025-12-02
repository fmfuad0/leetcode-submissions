//Author : https://leetcode.com/u/fmfuad/
//Title : Unique Paths
//Submission id : 1838652768
//Problem url : https://leetcode.com/problems/unique-paths/
//Submission url : https://leetcode.com/submissions/detail/1838652768/


class Solution {
public:
    long double arr[101][101] ; 

void prepareMatrix(){
    for(int i=1; i<=100; i++){
        arr[100][i]=1;
        arr[i][100]=1;
    }
    for(int i=99; i>0; i--){
        for(int j=99; j>0; j--){
            arr[i][j] = arr[i+1][j]+arr[i][j+1];
            // arr[j][i]=arr[i][j];
        }
    }
    // for(int i=1; i<101; i++){
    //     for(int j=1; j<101; j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}

int uniquePaths(int m, int n) {
    prepareMatrix();
    return arr[101-m][101-n];
}
};

