//Author : https://leetcode.com/u/fmfuad/
//Title : Rotate List
//Submission id : 1842057809
//Problem url : https://leetcode.com/problems/rotate-list/
//Submission url : https://leetcode.com/submissions/detail/1842057809/


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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0)return head;
        if(head==nullptr)return head;

        long long size =0;
        ListNode *tmp=head;
        stack<ListNode*> st;
        while(tmp!=nullptr){
            size++;
            st.push(tmp);
            tmp=tmp->next;
        }
        k=k%size;
        if(k==0)return head;
        st.top()->next=head;
        ListNode *result=st.top();
        while(k--){
            result=st.top();
            st.pop();
        }
        st.top()->next=nullptr;
        return result;
    }
};
