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
    void find(TreeNode* root,map<long long,long long>&mpp,long long sum,int tar,int &ct){

        if(root==NULL) return;

        sum+=root->val;

        if(mpp.find(sum-tar)!=mpp.end()){
            ct+=mpp[sum-tar];
        }

        mpp[sum]++;

        find(root->left,mpp,sum,tar,ct);
        find(root->right,mpp,sum,tar,ct);
        
        mpp[sum]--;

    }
    int pathSum(TreeNode* root, int tar) {
        

        map<long long ,long long>mpp;
        mpp[0]=1;
        int ct=0;
        int sum=0;
        find(root,mpp,sum,tar,ct);

        return ct;
    }
};