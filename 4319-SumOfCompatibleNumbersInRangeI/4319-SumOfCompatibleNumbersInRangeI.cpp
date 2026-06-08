// Last updated: 09/06/2026, 01:20:48
class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int sum=0;
        int i=max(n-k,0);
        while(i<=n+k){
            if((abs(n - i) <= k) && ((n & i) == 0)){
                sum+=i;
                
            }
            
            i++;

        }
            
        return sum;



        
    }
};