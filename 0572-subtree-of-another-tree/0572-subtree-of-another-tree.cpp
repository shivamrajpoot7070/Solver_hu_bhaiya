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
    bool ans=false;
    bool match(TreeNode* root,TreeNode* subroot){

        if(root==NULL && subroot==NULL){
            return true;
        }

        if(root==NULL || subroot==NULL){
            return false;
        }

        if(root->val!=subroot->val){
            return false;
        }

        bool left=match(root->left,subroot->left);
        bool right=match(root->right,subroot->right);

        return left && right;
    }

    void find(TreeNode* root,int val,TreeNode* subroot){

        if(root==NULL){
            return;
        }   

        find(root->left,val,subroot);
        find(root->right,val,subroot);

        if(root->val==val){
            if(ans==false && match(root,subroot)){
                ans=true;
            }
            return;
        }

    }
    bool isSubtree(TreeNode* root, TreeNode* subroot) {


        // if(subroot->left==NULL && subroot->right==NULL){
            
        //     if(subroot->val==root->val){
        //         return true;
        //     }
        //     return false;
        // }

        int val=subroot->val;
        int x=0;

        find(root,val,subroot);

        return ans;
        

    }
};