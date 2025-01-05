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
    ListNode* reverseList(ListNode* head) {

        if(head==NULL || head->next==NULL){
            return head;
        }


        ListNode *prev=NULL;

        ListNode* agla=head->next;

        while(head!=NULL){
            head->next=prev;
            prev=head;
            head=agla;

            if(agla!=NULL){
                 agla=agla->next;
            }
        }

        return prev;
        
    }
};