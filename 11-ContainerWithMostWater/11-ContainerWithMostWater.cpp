// Last updated: 03/06/2026, 09:30:28
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        long long maxArea=0;

        while(r>l){
            int h=min(height[l],height[r]);
            int width=r-l;
            long long area=(long long)h*width;

            maxArea=max(area,maxArea);


            if(height[l]<height[r]){
                l++;
                
            }
            else{
                r--;
                
            }



        }
        return maxArea;
        
    }
};