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
    ListNode* mergeTwoLists(ListNode* List1, ListNode* List2) {

        ListNode* mer=new ListNode(-1);
        ListNode* add=mer;

        ListNode* i=List1;
        ListNode* j=List2;


        while(i!=NULL && j!=NULL){

            if(i->val<=j->val){

                ListNode* t=new ListNode(i->val);
                add->next=t;
                add=t;
                i=i->next;
            }

            else{

                ListNode* t=new ListNode(j->val);
                add->next=t;
                add=t;
                j=j->next;
            }


        }


        while(i!=NULL){

                ListNode* t=new ListNode(i->val);
                add->next=t;
                add=t;
                i=i->next;

        }


        while(j!=NULL){
            ListNode* t=new ListNode(j->val);
                add->next=t;
                add=t;
                j=j->next;
        }


        return mer->next;


        
    }
};