class Solution {
public:
    int searchInsert(vector<int>& arr, int tar) {

        int n=arr.size();


        int ind=0;


        int low=0;
        int high=n-1;



           




            while(low<=high){

                 int mid=(low+high)/2;


                if(arr[mid]==tar){
                    return mid;
                }


                else if(arr[mid]<tar){
                    ind=mid+1;
                    low=mid+1;
                }

                else{

                    high=mid-1;
                }



            }

            return ind;

        }
};