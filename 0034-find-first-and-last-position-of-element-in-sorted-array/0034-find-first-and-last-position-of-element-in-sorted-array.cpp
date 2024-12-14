class Solution {
public:

    int fst(vector<int>& arr, int tar){

        int low=0;
        int high=arr.size()-1;
        int x=-1;

        while(low<=high){
            int mid=(low+high)/2;


            if(arr[mid]==tar){
                x=mid;
                high=mid-1;
            }


            else if(tar>arr[mid]){
                low=mid+1;
            }

            else{
                high=mid-1;
            }
        }

        return x;
    }



    int scnd(vector<int>& arr, int tar){

        int low=0;
        int high=arr.size()-1;
        int x=-1;

        while(low<=high){
            int mid=(low+high)/2;


            if(arr[mid]==tar){
                x=mid;
                low=mid+1;
            }

            else if(tar>arr[mid]){
                low=mid+1;
            }

            else{
                high=mid-1;
            }
        }

        return x;
    }




    vector<int> searchRange(vector<int>& arr, int tar) {

        vector<int>v;

        int x=fst(arr,tar);
        int y=scnd(arr,tar);


        v.push_back(x);
        v.push_back(y);

        return v;
    }
};