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
     vector<vector<int>> ans;
    int func(TreeNode* root, int level)
    {
        if(root==NULL)
            return 0;
        int a=func(root->left,level);
        int b=func(root->right,level);
        int x=max(a,b);
        if(x>=ans.size())
        {
        vector<int>v;
        ans.push_back(v);
        }
        ans[x].push_back(root->val);
        return x+1;
    }
    vector<vector<int>> findLeaves(TreeNode* root) {
         func(root,0);
         return ans;
    }
};