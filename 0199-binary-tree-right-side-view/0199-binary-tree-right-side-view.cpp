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


    
void rightview(TreeNode* root,vector<int>&v){

    if(root==NULL){
        return;
    }

    queue<TreeNode*>q;
    
    q.push(root);
    while(q.size()>0){

        int size=q.size();

        vector<int>ans;

        for(int i=0;i<size;i++){
            TreeNode* temp=q.front();

            q.pop();

            if(temp->left!=NULL){
                q.push(temp->left);
            }

            if(temp->right!=NULL){
                q.push(temp->right);
            }

            ans.push_back(temp->val);
        }

        v.push_back(ans.back());

    }
}




    vector<int> rightSideView(TreeNode* root) {

    vector<int>v;

    if(root==NULL){
        return v;
    }

    if(root->left==NULL && root->right==NULL){
        return{root->val};
    }

    rightview(root, v);

    return v;
        
    }
};