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

    ListNode* reverse(ListNode* curr){

        ListNode* prev=NULL;

        ListNode* ne=NULL;

        while(curr!=NULL){
            ne=curr->next;
            curr->next=prev;
            prev=curr;
            curr=ne;
        }

        return prev;
    }
    bool isPalindrome(ListNode* head) {


        ListNode *slow=head;
        ListNode *fast=head;


        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* revhead=reverse(slow->next);
        slow->next=NULL;


        ListNode *org=head;
        ListNode *rev=revhead;


        while(rev!=NULL){

            if(rev->val!=org->val){
                return false;
            }
            rev=rev->next;
            org=org->next;
        }

        return true;
    }
};