// Last updated: 06/04/2026, 01:27:06
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& v) {
        int n = v.size();

        int count = 0;
        int maxCount = 0;

        for(int i = 0; i < n; i++) {
            if (v[i] == 1) {
                count++;
            }
            if (v[i] != 1) {
                if (count > maxCount) {
                    maxCount = count;
                }
                count = 0;
            }
        }

        if (count > maxCount) {
            maxCount = count;
        }

        return maxCount;
    }
};