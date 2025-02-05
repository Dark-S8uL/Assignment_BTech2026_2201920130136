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
    void solve(TreeNode* root, int tSum, vector<int>& temp, vector<vector<int>>& v) {
        if(!root) return ;
        temp.push_back(root->val) ;
        tSum -= root->val ;
        if(!root->left && !root->right && tSum == 0) v.push_back(temp) ;
        solve(root->left, tSum, temp, v) ;
        solve(root->right, tSum, temp, v) ;
        temp.pop_back() ;
    }
    vector<vector<int>> pathSum(TreeNode* root, int tSum) {
        vector<vector<int>> v ;
        vector<int> temp ;
        solve(root, tSum, temp, v) ;
        return v ;
    }
};