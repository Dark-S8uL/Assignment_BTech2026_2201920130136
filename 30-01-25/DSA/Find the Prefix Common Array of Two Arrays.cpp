class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {
        int n = a.size() ;
        vector<int> c(n), v(n+1, 0) ;
        int cnt = 0 ;
        for(int i = 0; i < n; i++) {
            if(++v[a[i]] == 2) cnt++ ;
            if(++v[b[i]] == 2) cnt++ ;
            c[i] = cnt ;
        }
        return c ;
    }
};