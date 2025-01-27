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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {

        ListNode* piche=head;
        ListNode* aage=head->next;


        while(aage!=NULL){

            int n=gcd(piche->val,aage->val);

            ListNode* t=new ListNode(n);

            piche->next=t;

            t->next=aage;

            piche=aage;
            aage=aage->next;
        }

        return head;
        
    }
};