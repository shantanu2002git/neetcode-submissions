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
map<int,vector<int>> res;
void call(vector<int>in, int idx, TreeNode* root){
    if(root==NULL){
        return;
    }
    call(in, idx+1, root->left);
    res[idx].push_back(root->val);
    call(in, idx+1, root->right);

}
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ins;
        vector<int>in;
        call(in, 0, root);
        for(auto ti : res){
            ins.push_back(ti.second);
        }
        return ins;
    }
};
