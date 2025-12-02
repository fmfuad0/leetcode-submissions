//Author : https://leetcode.com/u/fmfuad/
//Title : Remove Duplicates from Sorted List II
//Submission id : 1842081749
//Problem url : https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
//Submission url : https://leetcode.com/submissions/detail/1842081749/


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
        if(head==nullptr || head->next==nullptr)return head;
        ListNode *result=nullptr;
        ListNode *insert;
        ListNode *tmp=head;
        map<int, bool> mapp;
        while(tmp!=nullptr){
            if(tmp->next!=nullptr){
                if(tmp->next->val!=tmp->val && !mapp[tmp->val]){
                    if(result==nullptr){
                        result=new ListNode(tmp->val); insert=result;
                    }else{
                        insert->next=tmp;
                        insert=insert->next;
                    }
                }
                mapp[tmp->val]=true;
            }else{
                if(!mapp[tmp->val]){
                    if(result==nullptr)
                        result=tmp;
                    else
                        insert->next=tmp;
                }
                else insert->next=nullptr;
            }
            tmp=tmp->next;
        }
        return result;
    }
};
