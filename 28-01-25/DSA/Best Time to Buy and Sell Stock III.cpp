class Solution {
public:
    int n ;
    vector<vector<vector<int>>> t ;
    int solve(int i, int n, vector<int>& p, bool f, int cnt) {
        if(i >= n) return 0 ;
        if(cnt == 0) return 0 ;
        if(t[i][f][cnt] != -1) return t[i][f][cnt] ;
        int profit = 0 ;
        if(f) {
            int a = solve(i+1, n, p, false, cnt) - p[i] ;
            int b = solve(i+1, n, p, true, cnt) ;
            profit = max(a, b) ;
        } else {
            int a = solve(i+1, n, p, true, cnt-1) + p[i] ;
            int b = solve(i+1, n, p, false, cnt) ;
            profit = max(a, b) ;
        }
        return t[i][f][cnt] = profit ;
    }
    int maxProfit(vector<int>& p) {
        n = p.size() ;
        t = vector<vector<vector<int>>>(n+1, vector<vector<int>>(2, vector<int>(3, -1)));
        return solve(0, n, p, true, 2) ;
    }
};