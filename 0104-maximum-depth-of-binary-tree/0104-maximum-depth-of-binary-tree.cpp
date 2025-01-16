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

void dep(TreeNode* root,int ct,int &mini){

      if(root==NULL){
        return;
      }

      if(root->left==NULL && root->right==NULL){
        mini=max(mini,ct);
      }

      ct=ct+1;
      dep(root->left,ct,mini);
      
      dep(root->right,ct,mini);
      // ct--;

    }
    int maxDepth(TreeNode* root) {

        int ct=1;
        int mini=0;

        dep(root,ct,mini);

        return mini;
        
    }
};