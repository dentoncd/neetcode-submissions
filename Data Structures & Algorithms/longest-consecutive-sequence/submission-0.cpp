class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::set<int> set(nums.begin(), nums.end());
        int curr{}, streak{}, res{};

        for (int num : set) {
            if (!set.count(num - 1)) {
                curr = num;
                streak = 1;
                while (set.count(curr + 1)) {
                    ++curr;
                    ++streak;
                }
            }
            res = std::max(res, streak);
        }
        return res;
    }
};
