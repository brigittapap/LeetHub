class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int ans = 0;
        for(auto &w : words) {
            int n = w.size();
            if(s.substr(0,n) == w) ans++;
        }
        return ans;
    }
};