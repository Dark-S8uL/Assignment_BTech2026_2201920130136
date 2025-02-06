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
    TreeNode* solve(int s, int e, int& idx, int n, vector<int>& inorder, vector<int>& preorder, unordered_map<int, int>& mp) {
        if(idx >= n || s > e) return NULL ;
        int data = preorder[idx++] ;
        TreeNode* root = new TreeNode(data) ;
        int pos = mp[data] ;
        root->left = solve(s, pos-1, idx, n, inorder, preorder, mp) ;
        root->right = solve(pos+1, e, idx, n, inorder, preorder, mp) ;
        return root ;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size() ;
        unordered_map<int, int> mp ;
        for(int i = 0; i < n; i++) mp[inorder[i]] = i ;
        int idx = 0 ;
        TreeNode* root = solve(0, n-1, idx, n, inorder, preorder, mp) ;
        return root ;
    }
};