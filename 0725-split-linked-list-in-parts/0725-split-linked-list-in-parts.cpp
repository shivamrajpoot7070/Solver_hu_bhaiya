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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {


        ListNode* addhead=head;
        ListNode* temp=head;
        vector<ListNode*>ans;
        int len=0;

        while(temp!=NULL){
            temp=temp->next;
            len++;
        }

        temp=head;

        if(len<k){

            for(int i=0;i<k;i++){
                if(temp){
                    ListNode* neww=new ListNode(temp->val);
                    ans.push_back(neww);
                    temp=temp->next;
                }
                else{
                    ans.push_back(NULL);
                }
            }

            return ans;
        }

        int rem=len%k;
        int addlen=len/k;

        temp=head;
        ListNode* prev=NULL;
        

        while(temp!=NULL){

            int loop=addlen;

            while(loop--){
                prev=temp;
                temp=temp->next;
            }

            if(rem){
                prev=temp;
                temp=temp->next;
                rem--;
            }
            prev->next=NULL;
            ans.push_back(addhead);
            addhead=temp;
            prev=NULL;
        }

        return ans;
    }
};