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

void count(TreeNode *root, int t,long long &ct,long long s){

    if(root==NULL){
        return;
    }


    s+=root->val;

    if(s==t){
        ct++;
        //return;
    }



    count(root->left,t,ct,s);
 count(root->right,t,ct,s);

}

  
    int pathSum(TreeNode* root, int t) {


      if(root==NULL){
        return 0;
    }

    long long ct=0;

    long long s=0;

    count(root,t,ct,s);

    ct+=pathSum(root->left, t);
    ct+=pathSum(root->right,t);
     
     
     return ct;
    

      

      
        
    }
};