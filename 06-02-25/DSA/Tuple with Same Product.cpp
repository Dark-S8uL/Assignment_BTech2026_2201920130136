class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size() ;
        if(n < 4) return 0 ;
        unordered_map<int, int> mp ;
        int cnt = 0;
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                int product = nums[i] * nums[j] ;
                cnt += 8 * mp[product] ;
                mp[product]++ ;
            }
        }
        return cnt;
    }
};