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

    void rev(TreeNode* l,TreeNode* r,int ct){

        if(!l || !r){
            return;
        }


        if(ct%2!=0){
            swap(l->val,r->val);
        }

        rev(l->left,r->right,ct+1);
        rev(l->right,r->left,ct+1);    

    }


    TreeNode* reverseOddLevels(TreeNode* root) {

        int ct=1;

        rev(root->left,root->right,ct);

        return root;
        
    }
};