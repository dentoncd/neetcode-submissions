class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int, int> map;
        int maj = 0;
        int k = nums.size() / 2;
        for (int num : nums) {
            map[num]++;
        }
        for (auto p : map) {
            if (p.second > k) {
                maj = p.first;
            }
        }
        return maj;
    }
};