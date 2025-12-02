//Author : https://leetcode.com/u/fmfuad/
//Title : Swap Nodes in Pairs
//Submission id : 1840506919
//Problem url : https://leetcode.com/problems/swap-nodes-in-pairs/
//Submission url : https://leetcode.com/submissions/detail/1840506919/


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
    ListNode *result=new ListNode();
    ListNode *prev = nullptr;
    void insert(ListNode* a){
        if(result->next==nullptr){result=a;}
        else {prev->next=a;}
        prev=a->next;
    }
    ListNode* swapPairs(ListNode* head) {
        ListNode *node = head;
        if(node==nullptr)return nullptr;
        if(node->next==nullptr)return node;
        while(node!=nullptr && node->next!=nullptr){
            ListNode *tmp = node->next;
            cout << "Found " << node->val <<  "  " << node->next->val << " Saved " << node->next->val << " into temp.\n" << endl;
            if(prev!=nullptr)cout << "Prev : " << prev->val << endl;
            if(tmp->next!=nullptr){
                node->next=tmp->next;
                cout << "Saving :" << tmp->next->val << " as third...and " << node->val << " as second\n";;
                tmp->next=node;
                cout <<"Final after this rotation : "  << tmp->val <<  "  " << tmp->next->val << " " << tmp->next->next->val << endl;
                insert(tmp);
                cout << "*** : " << node->val << endl;
                if(node->next==nullptr){insert(node);return result;}
                node=node->next;
            }
            else{
                if(prev==nullptr){ListNode *hh=new ListNode (tmp->val, node); node->next=nullptr;return hh;}
                tmp  = new ListNode(tmp->val, node);
                node->next=nullptr;
                insert(tmp);
                return result;
            }

        }
        return result;
    }
};
