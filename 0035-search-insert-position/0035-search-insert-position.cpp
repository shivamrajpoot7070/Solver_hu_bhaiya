class Solution {
public:
    int searchInsert(vector<int>&arr, int tar) {

        int low=0;
        int high=arr.size()-1;

        int mid;

        while(low<=high){

            mid=(low+high)/2;

            if(arr[mid]==tar){
                return mid;
            }

            else if(arr[mid]<tar){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

        // if(tar==0){
        //     return 0;
        // }
        
        if(arr[mid]>tar){
            if(mid==0){
                return 0;
            }
            return mid;
        }
        else{
            return mid+1;
        }
    }
};