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
    typedef unsigned long long ll;
    int widthOfBinaryTree(TreeNode* root) {

        if(root==NULL){
            return 0;
        }

        queue<pair<TreeNode*,ll>>q;
        q.push({root,0});

        ll wid=0;

        while(q.size()>0){

           ll n=q.size();

           ll r=q.back().second;
           ll l=q.front().second;

            wid=max(wid,r-l+1);

            while(n--){
                TreeNode* temp=q.front().first;
                ll idx=q.front().second;

                q.pop();
                if(temp->left){
                    ll id=(2*idx)+1;
                    q.push({temp->left,id});
                }

                if(temp->right){
                    ll id=(2*idx)+2;
                    q.push({temp->right,id});
                }
            }
            
        }

        return wid;
        
    }
};