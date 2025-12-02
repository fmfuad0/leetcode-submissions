//Author : https://leetcode.com/u/fmfuad/
//Title : Intersection of Two Linked Lists.cpp
//Submission id : 1844510546
//Problem url : https://leetcode.com/problems/intersection-of-two-linked-lists/
//Submission url : https://leetcode.comhttps://leetcode.com/submissions/detail/1844510546/


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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*, bool> mapp;
        while(headA!=nullptr){mapp[headA]=true;headA=headA->next;}
        while(headB!=nullptr){if(mapp[headB])return headB;headB=headB->next;}
        return nullptr;
    }
};
