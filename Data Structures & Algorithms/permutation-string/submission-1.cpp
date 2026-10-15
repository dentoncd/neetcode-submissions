class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) {
            return false;
        }
        std::unordered_map<char, int> map1;
        std::unordered_map<char, int> map2;

        for (char c : s1) {
            map1[c]++;
        }

        int l = 0;
        for (int r = 0; r < s2.length(); ++r) {
            map2[s2[r]]++;
            if (r - l + 1 > s1.size()) {
                map2[s2[l]]--;
                if (map2[s2[l]] == 0) {
                    map2.erase(s2[l]);
                }
                ++l;

            }
            if (map1 == map2) {
                return true;
            }
        }
        
        return false;
    }
};
