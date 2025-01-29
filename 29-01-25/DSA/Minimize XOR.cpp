class Solution {
public:
    int minimizeXor(int n1, int n2) {
        int x = 0, cnt = 0 ;
        for (int i = 0; i < 32; i++) {
            if (n2 & (1 << i)) {
                cnt++;
            }
        }
        int a = cnt ;
        for (int i = 31; i >= 0; i--) {
            if (a == 0) break;
            if ((n1 & (1 << i)) != 0) {
                x |= (1 << i) ;
                a-- ;
            }
        }
        for (int i = 0; i < 32; i++) {
            if (a == 0) break ;
            if ((x & (1 << i)) == 0) {
                x |= (1 << i) ;
                a-- ;
            }
        }
        return x;
    }
};