class Solution {
public:
    int countSegments(string s) {
        int n = s.length() ;
        int cnt = 0 ;
        for(int i = 0; i < n; i++) {
            if(i == 0 && s[i] != ' ') cnt++ ;
            else if(i != 0 && s[i-1] == ' ' && s[i] != ' ') cnt++ ;
        }
        return cnt ;
    }
};