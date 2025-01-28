class Solution {
public:
    bool doesValidArrayExist(vector<int>& d) {
        int n = d.size() ;
        int xoR = 0 ;
        for(int i = 0; i < n; i++) xoR ^= d[i] ;
        if(xoR == 0) return true ;
        return false ;
    }
};