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

    int maxi=INT_MIN;


    int ht(TreeNode* root){

        if(root==NULL){
            return 0;
        }

        int left=ht(root->left);
        int right=ht(root->right);

        return 1+max(left,right);
    }


    int diameterOfBinaryTree(TreeNode* root) {


        if(root==NULL){
            return 0;
        }


      int left=ht(root->left);
      int ryt=ht(root->right);

      maxi=max(maxi,left+ryt);

       diameterOfBinaryTree(root->left);
       diameterOfBinaryTree(root->right);

       return maxi;

        
    }
};