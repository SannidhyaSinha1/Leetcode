// Last updated: 04/06/2026, 14:23:27
class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length()>0&& s.find(part)<s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};