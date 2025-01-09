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
    ListNode* oddEvenList(ListNode* head) {

        
      if(head==NULL || head->next==NULL){
        return head;
      }

      ListNode*odd=head;
      ListNode*odhead=odd;

      ListNode*even=head->next;
      ListNode* evhead=even;


      while(even && even->next){

        odd->next=even->next;   // agr even node rhega tab na judega isly loop me even ya even ka next hai
        odd=even->next;

        even->next=odd->next;
        even=odd->next;

      }

      odd->next=evhead;


      return odhead;

    
    }
};