//Author : https://leetcode.com/u/fmfuad/
//Title : Finding Pairs With a Certain Sum.cpp
//Submission id : 1842720124
//Problem url : https://leetcode.com/problems/finding-pairs-with-a-certain-sum/
//Submission url : https://leetcode.comhttps://leetcode.com/submissions/detail/1842720124/


class FindSumPairs {
public:
    vector<int> a;
    vector<int> b;
    map<int, int> mapp1;
    map<int, int> mapp2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        for(auto i:nums1){a.push_back(i);mapp1[i]++;}
        for(auto i:nums2){b.push_back(i);mapp2[i]++;}
    }
    
    void add(int index, int val) {
        mapp2[b[index]]--;
        b[index]+=val;
        mapp2[b[index]]++;
        // cout << "New : " << b[index] << "Freq : " << mapp2[b[index]] << endl;
    }
    
    int count(int tot) {
        int result=0;
        // cout << "Tot : " << tot << endl;
        for(auto i:mapp1){ 
            // cout << i.first << "-->"<< i.second << " " << tot-i.first << "-->" << mapp2[tot-i.first] << endl; 
            result+=i.second*mapp2[tot-i.first];
        }
        // cout << "Result : " << result << endl;
        return result;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */
