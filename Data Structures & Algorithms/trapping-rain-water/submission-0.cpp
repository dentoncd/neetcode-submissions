class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int lx = height[l];
        int rx = height[r];
        int w = 0;

        while (l < r) {
            if (lx < rx) {
                l++;
                lx = std::max(lx, height[l]);
                w += lx - height[l];
            }
            else {
                r--;
                rx = std::max(rx, height[r]);
                w += rx - height[r];
            }
        }
        return w;
    }
};
