// Last updated: 02/06/2026, 01:19:50
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];

        
    }
};