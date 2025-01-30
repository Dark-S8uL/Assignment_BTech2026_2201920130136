class Solution {
public:
    int minimumLength(string s) {
        int n = s.length() ;
        if(n < 3) return n ;
        unordered_map<char, int> mp ;
        for(char c : s) mp[c]++ ;
        int len = 0 ;
        for(auto& pair : mp) {
            if(pair.second < 3) len += pair.second ;
            else {
                if(pair.second % 2 == 0) len += 2 ;
                else len++ ;
            }
        }
        return len ;
    }
};