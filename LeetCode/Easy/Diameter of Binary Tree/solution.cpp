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
pair<int,int> helper(TreeNode* root){
    if(root==NULL) return make_pair(0,0);
    pair<int,int> leftinfo=helper(root->left);  //LD,LH
    pair<int,int> rightinfo=helper(root->right); //RD,RH
    int currdia=leftinfo.second +rightinfo.second;
    int finaldia=max(currdia,max(leftinfo.first,rightinfo.first));
    int finalht=max(leftinfo.second,rightinfo.second)+1;
    return make_pair(finaldia,finalht);
 }
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int,int> res=helper(root);
        return res.first;
    }
};