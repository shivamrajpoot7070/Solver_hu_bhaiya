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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int sum=0;
        int carry=0;
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;

        ListNode* fst=l1;
        ListNode* scnd=l2;
        
        while(fst || scnd){
            
            if(fst!=NULL){
                sum+=fst->val;
                fst=fst->next;
            }
            
            if(scnd!=NULL){
                sum+=scnd->val;
                scnd=scnd->next;
            }
            
            if(carry>=1){
                sum+=carry;
                
            }
            
            if(sum>=10){
                carry=1;
                ListNode* neww=new ListNode(sum%10);
                temp->next=neww;
                temp=neww;
            }
            else{
                carry=0;
                ListNode* neww=new ListNode(sum);
                temp->next=neww;
                temp=neww;
            }
            
            
            sum=0;
        }

        if(carry!=0){
            ListNode* neww=new ListNode(1);
            temp->next=neww;
            temp=neww;
        }
        
        return dummy->next;
        
    }
};