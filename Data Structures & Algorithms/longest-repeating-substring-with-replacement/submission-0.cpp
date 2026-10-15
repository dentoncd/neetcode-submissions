class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int mxf = 0;
        int res = 0;
        std::map<char, int> map;
        for (int r = 0; r < s.length(); ++r) {
            map[s[r]]++;
            mxf = std::max(mxf, map[s[r]]);
            while ((r - l + 1) - mxf > k) {
                map[s[l]]--;
                l++;
            }
            res = std::max(res, r - l + 1);
        }
        return res;
    }
};
