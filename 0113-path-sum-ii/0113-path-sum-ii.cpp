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
     vector<int>path;
    void pathsum2(TreeNode* root,int curr, int targetSum)
    {
           if(root==NULL) return;
        path.push_back(root->val);
        curr+=root->val;
        if((root->left==NULL&&root->right==NULL)&&(curr==targetSum))
        {
            ans.push_back(path);
        }
       
       pathsum2(root->left,curr,targetSum);
        pathsum2(root->right,curr,targetSum);
        path.pop_back();
    }
        
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
         pathsum2(root,0,targetSum);
         return ans;
    }
};