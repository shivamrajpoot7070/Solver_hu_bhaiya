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

    TreeNode* del(TreeNode* root){


      if(root==NULL){
        return nullptr;
      }

      root->left=del(root->left);
      root->right=del(root->right);

      if(root->val==0 && root->left==NULL && root->right==NULL){
          delete root;
          return nullptr;

      }
        
      return root;

    }



    TreeNode* pruneTree(TreeNode* root) {

      return del(root);

      
        
    }
};