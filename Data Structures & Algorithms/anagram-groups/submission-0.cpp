class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::map<std::string, std::vector<std::string>> map;
        std::vector<std::vector<std::string>> res;
        for (auto str : strs) {
            std::string newstr = str;
            std::sort(newstr.begin(), newstr.end());
            map[newstr].push_back(str);
        }
        for (auto pair : map) {
            res.push_back(pair.second);
        }
        return res;
    }
};
