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


        if(head==NULL){
            return head;
        }

        ListNode* aage=head->next;
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        ListNode* move=head;

        while(aage!=NULL){

            bool dup=false;

            while(aage!=NULL && aage->val==head->val){
                aage=aage->next;
                dup=true;
            }

            if(dup){
                head=aage;
                aage=aage->next;
            }

            else{
                ListNode *t=new ListNode(head->val);
                temp->next=t;
                temp=t;
                head=aage;
                aage=aage->next;
            }
        }

        if(head->val!=temp->val){
            ListNode *t=new ListNode(head->val);
            temp->next=t;
            temp=t;
        }

        return dummy->next;

        
    }
};