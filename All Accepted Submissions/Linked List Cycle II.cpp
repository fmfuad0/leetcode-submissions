//Author : https://leetcode.com/u/fmfuad/
//Title : Linked List Cycle II.cpp
//Submission id : 1844362744
//Problem url : https://leetcode.com/problems/linked-list-cycle-ii/
//Submission url : https://leetcode.comhttps://leetcode.com/submissions/detail/1844362744/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr || head->next==nullptr)return nullptr;
        map<ListNode*, bool> mapp;
        while(head!=NULL)
        {
            if(mapp[head])
                return head;
            mapp[head]=true;
            head=head->next;
        }
        return nullptr;
    }
};
