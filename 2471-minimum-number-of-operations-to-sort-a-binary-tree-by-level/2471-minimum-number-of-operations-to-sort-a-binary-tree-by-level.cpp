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
    int minimumOperations(TreeNode* root) {

        queue<TreeNode*>q;

        q.push(root);

        int ct=0;

        while(q.size()>0){

            int n=q.size();
            vector<int>v;
            unordered_map<int,int>mpp;

            while(n--){

                TreeNode*temp=q.front();
                q.pop();

                if(temp->left){
                    q.push(temp->left);
                    
                }

                if(temp->right){
                    q.push(temp->right);
                }

                v.push_back(temp->val);

            }
                vector<int>arr=v;
                
                sort(v.begin(),v.end());

                for(int i=0;i<arr.size();i++){
                    mpp[arr[i]]=i;
                }

                int m=arr.size();

                vector<bool>mark(m,true);

                for(int i=0;i<v.size();i++){
                    if(v[i]!=arr[i]){
                        int ind=mpp[v[i]];
                        mpp[arr[i]]=mpp[v[i]];
                        swap(arr[i],arr[ind]);
                       // mpp[arr[i]]=mpp[v[i]];
                        ct++;
                    }
                }
        }

        return ct;

    }
};