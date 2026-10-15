class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> hash_x;
        map<char, int> hash_y;
        for (char c : s) {
            hash_x[c]++;
        }
        for (char c : t) {
            hash_y[c]++;
        }
        if (hash_x == hash_y) {
            return true;
        }
        return false;
    }
};
