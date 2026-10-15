class Solution {
public:
    bool isValid(string s) {
        std::map<char, int> map = {
            {'}', '{'},
            {']', '['},
            {')', '('}
        };
        std::stack<char> stack;

        for (char c : s) {
            if (map.count(c)) {
                if (!stack.empty() && map[c] == stack.top()) {
                    stack.pop();
                } else {
                    return false;
                }
            } else {
                stack.push(c);
            }
        }
        return stack.empty();
    }
};
