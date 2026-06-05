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
int call(TreeNode* root, int h){
    if(root==NULL){
        return 0;
    }
    int left=call(root->left, h);
    int right=call(root->right, h);
    return max(left, right)+1;
}
    int maxDepth(TreeNode* root) {
     return call(root,0);   
    }
};
