// Last updated: 08/06/2026, 00:52:27
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int og=x;
        vector<int>nums;

        while(og>0){
            int digit=og%10;
            nums.push_back(digit);
            og=og/10;


        }
        int l=0,r=nums.size()-1;

        while(r>l){
            if(nums[l]!=nums[r]){
                return false;
            }
            l++;
            r--;

        }
        return true;
        
        
    }
};