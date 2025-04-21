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
    void find(TreeNode* root,vector<string>&ans,string temp){

        if(root==NULL){
            return;
        }

        string a=to_string(root->val);

        if(root->left==NULL && root->right==NULL){
            temp+=a;
            ans.push_back(temp);
            return;
        }

        find(root->left,ans,temp+a+"->");
        find(root->right,ans,temp+a+"->");

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string>ans;
        string temp="";

        find(root,ans,temp);

        cout<<100-'0';
        
        return ans;
    }
};