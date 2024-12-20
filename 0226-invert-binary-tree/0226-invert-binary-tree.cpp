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

    void invert(TreeNode* l,TreeNode* r){

        if(!l || !r){
            return;
        }


        invert(l->left,r->right);
        invert(l->right,r->left);

        swap(l->val,r->val);

    }


    TreeNode* invertTree(TreeNode* root) {


        if(root==NULL){
            return root;
        }


        invert(root->left,root->right);


        return root;


        
    }
};