/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool check(TreeNode* p,TreeNode* q){

        if(p==NULL && q==NULL){
            return true;
        }

        if((p!=NULL && q==NULL) || (p==NULL && q!=NULL)) return false;

        if(p->val != q->val) return false;

       // if(p->val==q->val) return true;

        bool lefty=check(p->left,q->left);
        bool righty=check(p->right,q->right);

        return lefty && righty;

    }
    bool isSameTree(TreeNode* p, TreeNode* q) {

        if(p==NULL && q==NULL) return true;

        if(p==NULL && q!=NULL) return false;

        if(q==NULL && p!=NULL) return false;

        if(p->val!=q->val) return false;
        
        return check(p->left,q->left) && check(p->right,q->right);
    }
};