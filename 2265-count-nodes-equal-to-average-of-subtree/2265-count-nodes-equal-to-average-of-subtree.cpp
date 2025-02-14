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

    pair<int,int> find(TreeNode* root,int &ct){

        if(root==NULL){
            return {0,0};
        }


        pair<int,int>left=find(root->left,ct);
        pair<int,int>right=find(root->right,ct);

        int totalnode=left.second+right.second+1;

        int total=left.first+right.first+root->val;

        int avg=total/totalnode;

        if(avg==root->val){
            ct++;
        }


        return {total,totalnode};

    }
    int averageOfSubtree(TreeNode* root) {

        
        pair<int,int>p;

        int ct=0;
        p=find(root,ct);

        return ct;

   }
};