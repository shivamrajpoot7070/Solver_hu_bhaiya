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
     void dfs(TreeNode* root,string temp,string &ans){

        if(root==NULL){
            return;
        }

        if(root->left==NULL && root->right==NULL){
            
            temp+=root->val+'a';

            reverse(temp.begin(),temp.end());
            if(ans.length()==0 || temp<ans){
                ans=temp;
            }

            reverse(temp.begin(),temp.end());
            return;
        }

        temp+=root->val+'a';
        dfs(root->left,temp,ans);
        dfs(root->right,temp,ans);
    }

    string smallestFromLeaf(TreeNode* root) {
        
        string ans="";
        
        string temp="";

        dfs(root,temp,ans);

        return ans;
        
    }
};