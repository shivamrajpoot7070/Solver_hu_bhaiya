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
     bool check(TreeNode* root){

        if(root==NULL){
            return true;
        }

        bool left=check(root->left);
        bool right=check(root->right);

        if(root){
             if(root->left && root->right){
                if(root->left->val+root->right->val==root->val){
                    return true;
                }
                else{
                    return false;
                }
             }
        }

        return left & right;

    }
    bool checkTree(TreeNode* root) {

        return check(root);
       


    }
};