class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int tmp{-1}, mfrq{-1};
        std::vector<int> res;
        std::map<int, int> map;
        for (int num : nums) {
            map[num]++;
        }
        while (k--) {
        for (auto pair: map) {
            if (pair.second > tmp) {
                tmp = pair.second;
                mfrq = pair.first;
            }
        }
        res.push_back(mfrq);
        while (tmp--) {
            map.erase(mfrq);
        }
    }
    return res;
    }
};
