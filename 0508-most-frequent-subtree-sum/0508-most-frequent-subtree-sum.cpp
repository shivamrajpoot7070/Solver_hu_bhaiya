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
    int find(TreeNode* root,unordered_map<int,int>&mpp){


        if(root==NULL){
            return 0;
        }

        int left=find(root->left,mpp);
        int right=find(root->right,mpp);
        int y=root->val+left+right;
        mpp[y]++;
        return y;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {

        vector<int>ans;

        unordered_map<int,int>mpp;


        int x=find(root,mpp);

        int maxi=-1;  // max occur 

        for(auto it:mpp){
            maxi=max(maxi,it.second);
        }

        for(auto it:mpp){
            if(it.second==maxi){
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};