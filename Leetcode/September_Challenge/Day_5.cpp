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
    void tra(vector<int>&ans,TreeNode* root){
        if(root==NULL) return;
        ans.push_back(root->val);
        tra(ans,root->left);
        tra(ans,root->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>ans;
        tra(ans,root1);
        tra(ans,root2);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};