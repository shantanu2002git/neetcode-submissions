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
void call(map<int,int>&mp, TreeNode* nd, int idx){
    if(nd==NULL){
return;
    }
    call(mp,nd->left,idx+1);
    mp[idx]=nd->val;
    call(mp,nd->right,idx+1 );
}
    vector<int> rightSideView(TreeNode* root) {
        map<int,int>mp;
        vector<int>res;
        int idx=0;
        call(mp,root, idx);
        for(auto it : mp){
res.push_back(it.second);
        }
        return res;

    }
};
