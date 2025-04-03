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

    int maxi=0;

    int height(TreeNode* root){

        if(root==NULL) return 0;

        return 1+max(height(root->left),height(root->right));

    }
    int diameterOfBinaryTree(TreeNode* root) {

        if(root==NULL) return 0;

        int lef=height(root->left);
        int rig=height(root->right);

        maxi=max(maxi,lef+rig);

       diameterOfBinaryTree(root->left);
       diameterOfBinaryTree(root->right);

        return maxi;
    }
};