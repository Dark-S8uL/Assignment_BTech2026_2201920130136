class Solution {
public:
    void solve(int i, int n, int k, vector<int>& temp, vector<vector<int>>& v) {
        if(temp.size() == k) {
            v.push_back(temp) ;
            return ;
        }
        for(int j = i; j <= n; j++) {
            temp.push_back(j) ;
            solve(j + 1, n, k, temp, v) ;
            temp.pop_back() ;
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> v ;
        vector<int> temp ;
        solve(1, n, k, temp, v) ;
        return v ;
    }
};