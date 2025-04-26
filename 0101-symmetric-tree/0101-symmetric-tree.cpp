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
    bool check(TreeNode* lefty,TreeNode* righty){

        if(lefty==NULL && righty==NULL){
            return true;
        }

        if(lefty==NULL || righty==NULL){
            return false;
        }

        if(lefty->val!=righty->val){
            return false;
        }

        return check(lefty->left,righty->right) && check(lefty->right,righty->left);

    }

    bool isSymmetric(TreeNode* root) {
         
         return check(root->left,root->right);
    }
};