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
int height(TreeNode* root){
    if(root==NULL) return 0;
    int l=height(root->left);
    int r=height(root->right);
    return max(l,r)+1;
}

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL){return true;}
        int l=0,r=0;
        if(root->left!=NULL){l=height(root->left);}
        if(root->right!=NULL){r=height(root->right);}

        if(abs(l-r)>1){return false;}
        bool leftbal=isBalanced(root->left);
        bool rightbal=isBalanced(root->right);
        if(leftbal==false || rightbal==false){return false;}
        return true;
    }
};