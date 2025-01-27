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

    bool find(int sum,TreeNode* root, int tar){

        if(root==NULL){
            return false;
        }

        if(root->left==NULL && root->right==NULL){

            sum+=root->val;

            if(sum==tar){
                return true;
            }
            else{
                return false;
            }
        }

        sum+=root->val;
        bool l=find(sum,root->left,tar);
        bool r=find(sum,root->right,tar);


        return l || r;


    }
    bool hasPathSum(TreeNode* root, int tar) {

        int sum=0;

        return find(sum,root,tar);
    }
};