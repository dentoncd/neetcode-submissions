class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        std::vector<int> res;
        for (auto vec : matrix) {
            for (int num : vec) {
                res.push_back(num);
            }
        }
        int l = 0;
        int r = res.size() - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (res[mid] < target) {
                l++;
            }
            else if (res[mid] > target) {
                r--;
            }
            else {
                return true;
            }
        }
        return false;
    }
};
