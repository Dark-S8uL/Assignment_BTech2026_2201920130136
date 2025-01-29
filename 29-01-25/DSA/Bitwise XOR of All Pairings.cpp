class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size() ;
        int xor1 = 0, xor2 = 0 ;
        for (int num : nums1) xor1 ^= num ;
        for (int num : nums2) xor2 ^= num ;
        int ans = 0 ;
        if (n % 2 != 0) ans ^= xor1 ;
        if (m % 2 != 0) ans ^= xor2 ; 
        return ans ;
    }
};