// Last updated: 18/05/2026, 14:51:57
class Solution {
public:
    int singleNumber(vector<int>& v) {
        int n = v.size();

        sort(v.begin(), v.end());

        if (v.size() == 1) {
            return v[0];
        }

        if (v[0] != v[1]) {
            return v[0];
        }

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                if (v[i] != v[i + 1]) {
                    return v[i];
                }
            }
        }

        

        return -1; 
    }
};