class Solution {
public:
    bool isPalindrome(string s) {
        std::string ns = "";
        for (char c : s) {
            if (isalnum(c)) {
                ns += tolower(c);
            }
        }
        int left = 0; int right = ns.length() - 1;
        while (left < right) {
            if (ns[left] != ns[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
