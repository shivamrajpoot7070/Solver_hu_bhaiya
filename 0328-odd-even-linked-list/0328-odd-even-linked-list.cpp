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
        odd=odd->next;

        even->next=odd->next;
        even=even->next;

      }

      odd->next=evhead;


      return odhead;

    }



















    // ListNode *even=head->next;
    // ListNode *odd=head;
    // ListNode *evennode=even;

    // while(even && even->next){

    //   odd->next=even->next;
    //   odd=odd->next;

    //   even->next=odd->next;
    //   even=even->next;

    // }

    // odd->next=evennode;

    // return head;

    // }



};