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

    void find(TreeNode* root, int &k,int &small){

        if(root==NULL) return;

        find(root->left,k,small);
        k--;
        if(k==0){
            small=root->val;
        return;
        } 
        find(root->right,k,small);
    }
    int kthSmallest(TreeNode* root, int k) {

        int small=0;

        find(root,k,small);

        return small;

    }
};