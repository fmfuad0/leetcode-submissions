//Author : https://leetcode.com/u/fmfuad/
//Title : Remove Duplicates from Sorted List
//Submission id : 1418163383
//Problem url : https://leetcode.com/problems/remove-duplicates-from-sorted-list/
//Submission url : https://leetcode.com/submissions/detail/1418163383/


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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *tmp=head;
        ListNode *prev=tmp;
        map<int, int> mapp;
        while(tmp!=NULL)
        {
            cout << tmp->val << endl;
            if(mapp[tmp->val])
            {
                cout << "found\n";
                prev->next=tmp->next;
                tmp=tmp->next;
            }
            else
            {
                mapp[tmp->val]=true;
                prev=tmp;
                tmp=tmp->next;
            }
                
        }
        return head;
    }
};
