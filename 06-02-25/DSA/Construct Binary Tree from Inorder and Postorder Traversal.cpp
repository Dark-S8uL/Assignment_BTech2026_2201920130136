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
    TreeNode* solve(int s, int e, int& idx, vector<int>& inorder, vector<int>& postorder, unordered_map<int, int>& mp) {
        if(idx < 0 || s > e) return NULL ;
        int data = postorder[idx--] ;
        TreeNode* root = new TreeNode(data) ;
        int pos = mp[data] ;
        root->right = solve(pos+1, e, idx, inorder, postorder, mp) ;
        root->left = solve(s, pos-1, idx, inorder, postorder, mp) ;
        return root ;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size() ;
        unordered_map<int, int> mp ;
        for(int i = 0; i < n; i++) mp[inorder[i]] = i ;
        int idx = n-1 ;
        TreeNode* root = solve(0, n-1, idx, inorder, postorder, mp) ;
        return root ;
    }
};