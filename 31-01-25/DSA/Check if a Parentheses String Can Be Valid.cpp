class Solution {
public:
    bool canBeValid(string s, string l) {
        int n = s.length();
        if (n % 2 != 0) return false; 
        int b = 0, u = 0;
        for (int i = 0; i < n; i++) {
            if (l[i] == '0') u++;
            else b += (s[i] == '(' ? 1 : -1);
            if (b + u < 0) return false; 
        }
        b = 0, u = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (l[i] == '0') u++;
            else b += (s[i] == ')' ? 1 : -1);
            if (b + u < 0) return false;
        }
        return true;
    }
};