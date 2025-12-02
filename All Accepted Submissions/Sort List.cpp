//Author : https://leetcode.com/u/fmfuad/
//Title : Sort List.cpp
//Submission id : 1844476152
//Problem url : https://leetcode.com/problems/sort-list/
//Submission url : https://leetcode.comhttps://leetcode.com/submissions/detail/1844476152/


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
    ListNode* sortList(ListNode* head) {
        map<int, int> mapp;
        while(head!=nullptr){
            mapp[head->val]++;
            head=head->next;
        }
        ListNode *result=nullptr;
        ListNode *prev;
        for(auto i:mapp){
            while(i.second){
                if(result==nullptr){result= new ListNode(i.first, nullptr);prev=result;}
                else{prev->next = new ListNode(i.first,nullptr);prev=prev->next;}
                i.second--;
            }
        }
        return result;
    }
};
