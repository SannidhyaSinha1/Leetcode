// Last updated: 08/06/2026, 00:52:28
class Solution {
public:
    int reverse(int x) {
        int og=x;
        long long count=0;

        while(x!=0){
            int digit=x%10;
            count=(count*10)+digit;
            x=x/10;
        }

        if(count > INT_MAX || count < INT_MIN) {
            return 0;
        }

        return count;
    }
};