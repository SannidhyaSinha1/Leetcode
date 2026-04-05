// Last updated: 06/04/2026, 01:27:12
class Solution {
public:
    int removeElement(vector<int>& v, int m) {
        
        int n = v.size();

        for (int i = 0; i < n; i++) {
            if (v[i] == m) {
                v.erase(v.begin() + i);
                i--;
                n--;
            }
        }

        return n;
    }
};