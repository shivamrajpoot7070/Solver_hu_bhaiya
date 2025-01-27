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
    void find(TreeNode* root, int target,unordered_map<int,int>&mpp,int &ct,long long currsum){


        if(root==NULL){
            return;
        }

        currsum+=root->val;

        if(mpp.find(currsum-target)!=mpp.end()){
            ct+=mpp[(currsum-target)];
        }

        mpp[currsum]++;

        find(root->left,target,mpp,ct,currsum);
        find(root->right,target,mpp,ct,currsum);
        mpp[currsum]--;


    }
    int pathSum(TreeNode* root, int target) {


        if(target==0){
            return 0;
        }

        unordered_map<int,int>mpp;

        mpp[0]=1;
        int ct=0;

        long long currsum=0;

        find(root,target,mpp,ct,currsum);

        return ct;

        
    }
};