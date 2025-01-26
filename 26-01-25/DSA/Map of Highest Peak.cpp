class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int r = isWater.size(), c = isWater[0].size();
        vector<vector<int>> h(r, vector<int>(c, r+c));
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (isWater[i][j] == 1) h[i][j] = 0; 
                else {
                    if (i > 0) h[i][j] = min(h[i][j], h[i-1][j] + 1); 
                    if (j > 0) h[i][j] = min(h[i][j], h[i][j-1] + 1); 
                }
            }
        }
        for (int i = r-1; i >= 0; i--) {
            for (int j = c-1; j >= 0; j--) {
                if (i < r-1) h[i][j] = min(h[i][j], h[i+1][j] + 1); 
                if (j < c-1) h[i][j] = min(h[i][j], h[i][j+1] + 1); 
            }
        }
        return h;
    }
};