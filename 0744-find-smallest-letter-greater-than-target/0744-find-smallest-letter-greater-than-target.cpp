class Solution {
public:
    char nextGreatestLetter(vector<char>& arr, char tar) {


        int low=0;
        int high=arr.size()-1;

        char mini=arr[0];

        while(low<=high){

            int mid=(low+high)/2;

            if(arr[mid]>tar){
                mini=arr[mid];
                high=mid-1;
            }

            else{

                low=mid+1;
            }


        }

        return mini;
        
    }
};