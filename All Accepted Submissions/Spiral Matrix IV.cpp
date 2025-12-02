//Author : https://leetcode.com/u/fmfuad/
//Title : Spiral Matrix IV
//Submission id : 1386789625
//Problem url : https://leetcode.com/problems/spiral-matrix-iv/
//Submission url : https://leetcode.com/submissions/detail/1386789625/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) 
    {
        int x=0, y=0;
        char ch='r';
        vector<vector<int>> ans(m,vector<int>(n, -1));
        map<pair<int, int>, bool> visited;
        ListNode* tmp=head;
        while(tmp!=nullptr)
        {
            visited[{x, y}]=true;
            ans[x][y]=tmp->val;
            tmp=tmp->next;
            if(ch=='r')
            {
                if(visited[{x,y+1}] || y+1==n)
                {
                    x+=1;
                    ch='d';
                }
                else
                    y+=1;
            }
            else if(ch=='d')
            {
                if(visited[{x+1, y}] || x+1==m)
                {
                    y-=1;
                    ch='l';
                }
                else
                    x+=1;
            }

            else if(ch=='l')
            {
                if(visited[{x, y-1}] || y==0)
                {
                    x-=1;
                    ch='u';
                }
                else
                    y-=1;
            }

            else if(ch=='u')
            {
                if(visited[{x-1, y}] || x==0)
                {
                    y+=1;
                    ch='r';
                }
                else
                    x-=1;
            } 
        }
        return ans;
    }
};
