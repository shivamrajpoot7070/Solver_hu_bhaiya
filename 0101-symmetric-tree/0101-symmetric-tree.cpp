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

    bool find(TreeNode* l,TreeNode* r){

        if(l==NULL && r==NULL){
            return true;
        }

        if(l==NULL || r==NULL){
            return false;
        }

        if(l->val!=r->val){
            return false;
        }
    
        bool lr=find(l->left,r->right);
        bool rl=find(l->right,r->left);

        return lr && rl;

    }

    bool isSymmetric(TreeNode* root) {

        return find(root->left,root->right);
        
    }
};