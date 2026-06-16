// Last updated: 16/06/2026, 20:36:07
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        
        sort(nums.begin(),nums.end());

        for(int st=0;st<nums.size();st++){
            
            if(st>0 && nums[st]==nums[st-1]){
                continue;
            }
            int st1=st+1;
            int end=nums.size()-1;



            while(end>st1){
                int sum=nums[st]+nums[st1]+nums[end];

                if(sum>0){
                    end--;
                }
                else if(sum<0){
                    st1++;
                    
                }
                else{

                    ans.push_back({nums[st],nums[st1],nums[end]});
                    st1++;end--;

                    while(st1<end && nums[st1]==nums[st1-1]){
                        st1++;
                    }
                }


                
            }

        }
        

        
        return ans;
        
    }
};