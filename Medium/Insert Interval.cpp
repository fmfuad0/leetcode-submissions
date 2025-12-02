//Author : https://leetcode.com/u/fmfuad/
//Title : Insert Interval
//Submission id : 1583518170
//Problem url : https://leetcode.com/problems/insert-interval/
//Submission url : https://leetcode.com/submissions/detail/1583518170/


class Solution {
public:
    void swap(vector<int> a, vector<vector<int>> &result){
        int x = result[result.size()-1][0];
        int y = result[result.size()-1][1];
        result.pop_back();
        result.push_back({x, max(y, a[1])});
    }

    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        cout << intervals.size() << endl;
        vector<vector<int>> result;
        result.push_back(intervals[0]);
        for(int i=1; i<intervals.size(); i++){
            if(intervals[i][0]<=result[result.size()-1][1])
                swap(intervals[i], result);
            else
                result.push_back(intervals[i]);
        }
        return result;
    }
};
