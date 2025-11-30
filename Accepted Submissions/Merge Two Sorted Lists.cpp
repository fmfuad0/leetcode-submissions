//Author : https://leetcode.com/u/fmfuad/
//Title : Merge Two Sorted Lists
//Submission id : 1419014267
//Problem url : https://leetcode.com/problems/merge-two-sorted-lists/
//Submission url : https://leetcode.com/submissions/detail/1419014267/


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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode *tmp=list1;
        ListNode *tmp2=list2;

        ListNode *head=NULL;
        ListNode *prev;
        while(tmp!=NULL || tmp2!=NULL)
        {
            ListNode *newNode=new ListNode();
            if(tmp!=NULL && tmp2!=NULL)
            {
                if((tmp->val<=tmp2->val))
                {
                    newNode->val=tmp->val;

                    if(head==NULL)
                        head=newNode;
                    else
                        prev->next=newNode;
                    
                    prev=newNode;
                    tmp=tmp->next;
                }
                else
                {
                    newNode->val=tmp2->val;
                    if(head==NULL)
                    head=newNode;
                    else
                    prev->next=newNode;
                    prev=newNode;
                    tmp2=tmp2->next;
                }
            }
            else if(tmp==NULL)
            {
                newNode->val=tmp2->val;
                if(head==NULL)
                    head=newNode;
                else
                    prev->next=newNode;
                prev=newNode;
                tmp2=tmp2->next;
            }
            else
            {
                newNode->val=tmp->val;
                if(head==NULL)
                    head=newNode;
                else
                    prev->next=newNode;
                prev=newNode;
                tmp=tmp->next;
            }
        }
        return head;
    }
};
