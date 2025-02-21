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
class FindElements {
public:
    TreeNode* temp=NULL;
    void create(TreeNode* root){
        
        if(root==NULL){
            return;
        }

        if(root->left!=NULL){
            int x=(2*root->val)+1;
            root->left->val=x;
        }

        if(root->right!=NULL){
            int x=(2*root->val)+2;
            root->right->val=x;
        }

        create(root->left);
        create(root->right);
    }

    bool search(TreeNode* root,int tar){


        if(root==NULL){
            return false;
        }

        if(root->val==tar){
            return true;
        }

        bool left=search(root->left,tar);
        bool right=search(root->right,tar);

        return left || right;
    }

    FindElements(TreeNode* root) {
        root->val=0;
        create(root);
        temp=root;
    }
    bool find(int target) {

        return search(temp,target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */