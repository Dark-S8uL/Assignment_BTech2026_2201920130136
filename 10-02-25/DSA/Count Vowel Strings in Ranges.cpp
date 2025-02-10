class Solution {
    public:
        vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
            int n = words.size(), m = queries.size() ;
            unordered_set<char> st = {'a', 'e', 'i', 'o', 'u'} ;
            vector<int> v(n+1, 0) ;
            for(int i = 0; i < n; i++){
                string s = words[i] ;
                if(st.find(s[0]) != st.end() && st.find(s[s.length()-1]) != st.end()) v[i+1] = v[i] + 1 ;
                else v[i+1] = v[i] ;
            }
            vector<int> ans(m) ;
            int i = 0 ;
            for(vector<int>& q : queries){
                int s = q[0], e = q[1] ;
                ans[i] = v[e+1] - v[s] ;
                i++ ;
            }
            return ans ;
        }
    };