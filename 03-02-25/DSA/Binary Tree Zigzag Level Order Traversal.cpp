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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v ;
        if(!root) return v ;
        queue<TreeNode*> q ;
        q.push(root) ;
        q.push(NULL) ;
        vector<int> temp ;
        while(!q.empty()){
            TreeNode* r = q.front() ;
            q.pop() ;
            if(r) temp.push_back(r->val) ;
            else {
                if(!q.empty()) q.push(NULL) ;
                if(!temp.empty()) {
                    v.push_back(temp) ;
                    temp.clear() ;
                }
                continue ;
            }
            if(r->left) q.push(r->left) ;
            if(r->right) q.push(r->right) ;
        }
        for(int i = 1; i < v.size(); i = i+2) {
            reverse(v[i].begin(), v[i].end()) ;
        }
        return v ;
    }
};