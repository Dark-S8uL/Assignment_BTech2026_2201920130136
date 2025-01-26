class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n = grid[0].size() ;
        long long mini = LLONG_MAX ;
        long long sum1 = accumulate(grid[0].begin(), grid[0].end(), 0LL), sum2 = 0 ;
        for(int i = 0; i < n; i++) {
            sum1 -= grid[0][i] ;
            long long maxi = max(sum1, sum2) ;
            mini = min(mini, maxi) ;
            sum2 += grid[1][i] ;
        }
        return mini ;
    }
};