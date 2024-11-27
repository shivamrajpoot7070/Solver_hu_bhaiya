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

    // int heightt(TreeNode* root){

    // if(root==NULL){
    //     return 0;
    // }

    // int t_left=heightt(root->left);
    // int t_right=heightt(root->right);

    // return 1+max(t_left,t_right);

    // }

    int maxDepth(TreeNode* root) {

    //   return heightt(root);

    queue<TreeNode*>q;


    q.push(root);

    int ct=0;

    while(q.size()>0){

        int n=q.size();
        ct++;

        while(n--){

            TreeNode*temp=q.front();
            q.pop();


            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }


    }

    return ct;



        
    }
};