// Last updated: 12/06/2026, 22:11:36
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,mid=0,high=nums.size()-1;

        while(mid<=high){
            
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                mid++;
                low++;
                
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[high],nums[mid]);
                high--;
            }

        }
       


        
    }
};