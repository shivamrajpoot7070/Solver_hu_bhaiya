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
    void find(TreeNode* root,int sum,vector<int>&temp,vector<vector<int>>&ans,int tar){

        if(root==NULL){
            return;
        }

        if(root->left==NULL && root->right==NULL){
            sum+=root->val;
            temp.push_back(root->val);
            if(sum==tar){
                ans.push_back(temp);
            }
            temp.pop_back();
            return;
        }

        sum+=root->val;
        temp.push_back(root->val);
        find(root->left,sum,temp,ans,tar);
        find(root->right,sum,temp,ans,tar);

        temp.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int tar) {
        
        vector<vector<int>>ans;
        vector<int>temp;
        int sum=0;

        find(root,sum,temp,ans,tar);

        return ans;
    }
};