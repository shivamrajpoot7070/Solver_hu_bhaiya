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


    void validsum(TreeNode* root,int sum,vector<int>v,vector<vector<int>>&ans){

      // if you want to pop back you can v as pass as refernce

      if(root==NULL){
        return;
      }

      v.push_back(root->val);

      if(root->left==NULL && root->right==NULL){

        if(sum==root->val){
          ans.push_back(v);

        }
      }
      
      validsum(root->left,sum-root->val,v,ans);
      validsum(root->right,sum-root->val,v,ans);
      }
    



    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        

        vector<vector<int>>ans;
        vector<int>v;
        validsum(root,targetSum,v,ans);

        return ans;
    }
};