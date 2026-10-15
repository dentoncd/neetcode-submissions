class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> map;
        for (int i = 0; i < nums.size(); ++i) {
            int comp = target - nums[i];
            if (map.find(comp) != map.end()) {
                return {map[comp], i};
            }
            map.insert({nums[i], i});
        }
        return {};
    }
};