//Author : https://leetcode.com/u/fmfuad/
//Title : Linked List Cycle.cpp
//Submission id : 1844358629
//Problem url : https://leetcode.com/problems/linked-list-cycle/
//Submission url : https://leetcode.comhttps://leetcode.com/submissions/detail/1844358629/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        if(head==nullptr || head->next==nullptr)return false;
        map<ListNode*, bool> mapp;
        while(head!=NULL)
        {
            if(mapp[head])
                return true;
            mapp[head]=true;
            head=head->next;
        }
        return false;
    }
};
