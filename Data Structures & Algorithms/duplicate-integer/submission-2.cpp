class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> set;
        for (int n : nums) {
            set.insert(n);
        }
        if (set.size() < nums.size()) {
            return true;
        }
        return false;
    }
};