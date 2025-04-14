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
    typedef pair<TreeNode*,int>p;
    vector<vector<int>> verticalTraversal(TreeNode* root) {

        map<int,vector<int>>mpp;

        queue<p>q;

        q.push({root,0});

        while(q.size()>0){

            int n=q.size();
            map<int,vector<int>>temp;

            while(n--){

                TreeNode* curr=q.front().first;
                int index=q.front().second;

                temp[index].push_back(curr->val);
                if(curr->left){
                    q.push({curr->left,index-1});
                }

                if(curr->right){
                    q.push({curr->right,index+1});
                }

                q.pop();
            }

            for(auto &[ind,vec]:temp){

                sort(vec.begin(),vec.end());
                for(int x:vec){
                    mpp[ind].push_back(x);
                }
            }
        }

        vector<vector<int>>ans;

        for(auto &[ind,vec]:mpp){
            ans.push_back(vec);
        }

        return ans;

    }
};