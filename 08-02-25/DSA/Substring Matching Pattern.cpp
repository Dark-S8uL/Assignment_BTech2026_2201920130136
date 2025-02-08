class Solution {
    public:
        bool hasMatch(string s, string p) {
            int idx = p.find('*');
            string pre = p.substr(0, idx), suf = p.substr(idx + 1); 
            int n = pre.length(), m = suf.length();
            for (int i = 0; i <= s.length() - n; i++) {
                if (s.substr(i, n) == pre) {
                    for (int j = i + n; j <= s.length() - m; j++) {
                        if (s.substr(j, m) == suf) return true; 
                    }
                }
            }
        
            return false;
        }
    };