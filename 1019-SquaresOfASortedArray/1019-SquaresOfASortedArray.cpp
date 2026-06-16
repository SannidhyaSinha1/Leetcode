// Last updated: 16/06/2026, 20:35:30
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int st = 0, end = n - 1;
        int idx = n - 1;

        while (st <= end) {
            if (abs(nums[st]) > abs(nums[end])) {
                ans[idx] = nums[st] * nums[st];
                st++;
            } else {
                ans[idx] = nums[end] * nums[end];
                end--;
            }
            idx--;
        }

        return ans;
    }
};