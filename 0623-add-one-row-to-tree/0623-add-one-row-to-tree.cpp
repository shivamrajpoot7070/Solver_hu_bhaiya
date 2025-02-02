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
    TreeNode* create(TreeNode* root,int val,int depth,int dep){


        if(root==NULL){
            return NULL;
        }

        if(dep==depth-1){
            TreeNode *l=root->left;
            TreeNode *r=root->right;

            TreeNode *nl=new TreeNode(val);
            TreeNode *nr=new TreeNode(val);

            root->left=nl;
            root->right=nr;

            nl->left=l;
            nr->right=r;

            return root;
        }

        root->left=create(root->left,val,depth,dep+1);
        root->right=create(root->right,val,depth,dep+1);


        return root;

    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {

        int dep=1;

       return create(root,val,depth,dep);
        
    }
};