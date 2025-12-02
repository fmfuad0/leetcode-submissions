//Author : https://leetcode.com/u/fmfuad/
//Title : Remove Nth Node From End of List
//Submission id : 1621312272
//Problem url : https://leetcode.com/problems/remove-nth-node-from-end-of-list/
//Submission url : https://leetcode.com/submissions/detail/1621312272/


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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> q;
        ListNode* tmp = head;

        while (tmp != nullptr) {
            q.push_back(tmp);
            tmp = tmp->next;
        }

        int sz = q.size();

        if (n == sz) {
            return head->next;
        }

        ListNode* prev = q[sz - n - 1];
        prev->next = prev->next->next;

        return head;
    }
};

