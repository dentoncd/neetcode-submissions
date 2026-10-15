class Solution {
public:
    bool isAnagram(string s, string t) {
        std::map<char, int> smap;
        std::map<char, int> tmap;
        for (char c : s) {
            smap[c]++;
        }
        for (char c : t) {
            tmap[c]++;
        }
        if (smap == tmap) {
            return true;
        }
        return false;
    }
};
