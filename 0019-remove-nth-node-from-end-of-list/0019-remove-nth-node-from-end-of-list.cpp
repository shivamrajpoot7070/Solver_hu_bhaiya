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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int len=0;

        ListNode* temp=head;

        while(temp!=NULL){

            temp=temp->next;
            len++;
        }

        cout<<len;

        len=len-n;


        if(len==0){

            if(head->next==NULL){
                return NULL;
            }

            else{
                head=head->next;
                return head;
            }
        }

        else{

            ListNode* prev=NULL;
            temp=head;

            while(len--){
                prev=temp;
                temp=temp->next;
            }

            if(temp->next==NULL){
                prev->next=NULL;
                delete temp;
                return head;
            }
            else{
                prev->next=temp->next;
                delete temp;
                return head;
            }
        }

        return head;
        
    }
};