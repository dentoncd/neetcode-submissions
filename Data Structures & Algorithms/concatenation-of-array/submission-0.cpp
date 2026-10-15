class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        std::vector<int> res;
        for (int num : nums) {
            res.push_back(num);
        }
        for (int num : nums) {
            res.push_back(num);
        }
        return res;
    }
};