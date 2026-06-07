// Last updated: 08/06/2026, 00:52:08
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st=0;
        int end=nums.size()-1;

        if(nums.size()==1||(nums[0]!=nums[1])){
            return  nums[0];
        }
        if(nums[end-1]!=nums[end]){
            return nums[end];

        }



        while(end>=st){
            int mid=st+(end-st)/2;

            if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }

            if(mid%2==0){
                if(nums[mid-1]==nums[mid]){
                    end=mid-1;
                }
                else{
                    st=mid+1;
                }

            }
            if(mid%2!=0){
                if(nums[mid-1]==nums[mid]){
                    st=mid+1;
                }
                else{
                    end=mid-1;
                }

            }
        }
        return -1;
        
    }
};