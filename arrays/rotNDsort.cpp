class Solution {
public:
    bool check(vector<int>& nums) {
        int c = 0;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                c++;
            }
        }
        if (nums[0] < nums[n - 1]) {
            c++;
        }
        return c <= 1;
    }
};
