// Last updated: 08/06/2026, 00:52:03
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int st=1,end=arr.size()-2;

        while(end>=st){
            int mid= st+(end-st)/2;

            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                return mid;
            }
            if(arr[mid-1]>arr[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return -1;

        
    }
};