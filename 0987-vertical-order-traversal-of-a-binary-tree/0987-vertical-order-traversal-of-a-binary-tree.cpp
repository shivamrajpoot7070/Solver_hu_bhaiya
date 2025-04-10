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
        
        queue<p>q;

        vector<vector<int>>ans;

        q.push({root,1});

        map<int,vector<int>>mpp;

        int level=0;

        while(q.size()>0){

            int n=q.size();

            while(n--){

                TreeNode* temp=q.front().first;
                int index=q.front().second;

                mpp[index].push_back(temp->val);

                if(temp->left){
                    q.push({temp->left,index-1});
                }
                if(temp->right){
                    q.push({temp->right,index+1});
                }

                q.pop();
            }
            level++;
        }

       for (auto& [idx, vec] :mpp) {
                sort(vec.begin(), vec.end());
                ans.push_back(vec);
        }
    
        return ans;
    }
};