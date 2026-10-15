class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int mx = 0;

        std::unordered_set<char> set;

        while (r < s.length()) {
            if (set.find(s[r]) == set.end()) {
                set.insert(s[r]);
                mx = std::max(mx, r - l + 1);
                ++r;
            }
            else {
                set.erase(s[l]);
                l++;
            }
        }
        return mx;
    }
};
