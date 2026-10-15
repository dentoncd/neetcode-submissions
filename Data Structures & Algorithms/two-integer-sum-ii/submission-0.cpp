class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        std::map<int, int> map; // Store num and index
        for (int i = 0; i < numbers.size(); ++i) { // Iterate through vector
            int temp = target - numbers[i]; // Compute complement
            if (map.find(temp) != map.end()) { // Check if comp exists
                return {map[temp], i + 1}; // Return the comp index and the num index
            }
            map[numbers[i]] = i + 1;
        }
        return {};
    }
};
