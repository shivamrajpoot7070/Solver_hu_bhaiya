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
        if(head==NULL || head->next==NULL){
                    return head;
                          }

                                ListNode*curr=head->next;
                                      ListNode*prev=head;

                                            int num=-2332;

                                                  ListNode*dummy=new ListNode(-1);
                                                        ListNode*temp=dummy;


                                                              while(curr!=NULL){

                                                                      if(prev->val!=curr->val && prev->val!=num){

                                                                                ListNode *t=new ListNode(prev->val);

                                                                                          temp->next=t;
                                                                                                    temp=t;
                                                                                                              curr=curr->next;
                                                                                                                        prev=prev->next;

                                                                                                                                }

                                                                                                                                        else if(prev->val==curr->val){

                                                                                                                                                  num=curr->val;
                                                                                                                                                            curr=curr->next;
                                                                                                                                                                      prev=prev->next;
                                                                                                                                                                              }

                                                                                                                                                                                      else{

                                                                                                                                                                                                curr=curr->next;
                                                                                                                                                                                                          prev=prev->next;
                                                                                                                                                                                                                    
                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                  }

                                                                                                                                                                                                                                        if(prev->val!=num){

                                                                                                                                                                                                                                                ListNode *t=new ListNode(prev->val);

                                                                                                                                                                                                                                                          temp->next=t;
                                                                                                                                                                                                                                                                    temp=t;
                                                                                                                                                                                                                                                                          }



                                                                                                                                                                                                                                                                                return dummy->next;
    } 
    
};