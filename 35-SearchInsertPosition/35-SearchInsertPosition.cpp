// Last updated: 12/06/2026, 22:11:40
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int st=0,end=nums.size()-1;

        while(end>=st){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(st==end && nums[mid]!=target){
                if(target>nums[st]){
                    return st+1;
                }
                if(target<nums[st]){

                    return st;
                }
            }
            if(nums[mid]>target){
                end=mid-1;
            }
            if(nums[mid]<target){
                st=mid+1;
            }

        }
        return st;
        
    }
};