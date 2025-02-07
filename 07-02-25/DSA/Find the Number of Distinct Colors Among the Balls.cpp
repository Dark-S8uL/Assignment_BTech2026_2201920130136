class Solution {
public:
    vector<int> queryResults(int l, vector<vector<int>>& q) {
        int n = q.size() ;
        vector<int> v(n) ;
        unordered_map<int, int> colors, count ; 
        for (int i = 0; i < n; i++) {
            int b = q[i][0], c = q[i][1] ;
            if (colors.count(b)) {
                int old = colors[b] ;
                if (--count[old] == 0) count.erase(old) ;
            }
            colors[b] = c ; 
            count[c]++ ;
            v[i] = count.size() ;
        }
        return v ;
    }
};