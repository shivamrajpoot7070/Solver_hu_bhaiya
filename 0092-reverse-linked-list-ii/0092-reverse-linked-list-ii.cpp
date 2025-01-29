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
    ListNode* reverseBetween(ListNode* head, int x, int y) {

      ListNode*dummy=new ListNode(-1);
      dummy->next=head;
      ListNode*prev=dummy;

      ListNode*curr=head;


      for(int i=0;i<x-1;i++){
        curr=curr->next;
        prev=prev->next;
      }

      ListNode* revhead=NULL;
      ListNode* revlast=curr;

      for(int i=0;i<y-x+1;i++){

        ListNode*agla=curr->next;
        curr->next=revhead;
        revhead=curr;
        curr=agla;
      }


      prev->next=revhead;
      revlast->next=curr;


      return dummy->next;






























      
  //  ListNode*dummy=new ListNode(-1);
  //  dummy->next=head;

  //  ListNode*prev=dummy;
  //  ListNode*curr=head;


  //  for(int i=0;i<x-1;i++){
  //      prev=prev->next;
  //      curr=curr->next;
  //  }

  //  ListNode*revtail=curr;         // jha re linked list rev hoga usko rkhenge
  //  ListNode*revhead=NULL;   // jha se rev krng usko piche se jodte hai to wai h ye

  //  for(int i=0;i<y-x+1;i++){
  //      //reverse kr rhe linked list ko
  //      ListNode*agla=curr->next;   
  //      curr->next=revhead;
  //      revhead=curr;
  //      curr=agla;
  //  }

  // //  curr or agla rev head ke baad rhega hmesa
  //  prev->next=revhead;  // jha se rev hua tha uske pichla node reverses ll ke head par
  //  revtail->next=curr;    // jha tail tha usko jode jo remaining reevrse ke baad bcha tha

  //  return dummy->next;
      
        
    }
};