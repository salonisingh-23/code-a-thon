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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*> q;
        if(!root) return ans;
        q.push(root);
        TreeNode *t;
        while(!q.empty())
        {
            int sz=q.size();
            
            while(sz--)
            {
               t=q.front();
                q.pop();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            ans.push_back(t->val);
        }
        return ans;
    }
};