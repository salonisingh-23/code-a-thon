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
    int count=0;
    // vector<int> path;
    void dfs(TreeNode* root,int k,int &count,vector<int>path)
    {
        if(!root) return;
        path.push_back(root->val);
        dfs(root->left,k,count,path);
        dfs(root->right,k,count,path);
        long long sum=0;
        for(int i=path.size()-1;i>=0;i--)
        {
            sum+=path[i];
            if(sum==k)
            {
                count++;
            }
        }
    }
    int pathSum(TreeNode* root, int targetSum) {
        vector<int>path;
    dfs(root,targetSum,count,path);
        return count;
    }
};