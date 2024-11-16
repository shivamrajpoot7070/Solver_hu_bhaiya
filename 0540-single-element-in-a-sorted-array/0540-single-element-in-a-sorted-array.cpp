class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {

        if(arr.size()==1){
            return arr[0];
        }

        int n=arr.size()-1;

        int low=0;
        int high=arr.size()-1;


        while(low<=high){

            int mid=(low+high)/2;

            if ((mid == 0 || arr[mid] != arr[mid - 1]) && (mid == arr.size() - 1 || arr[mid] != arr[mid + 1])) {
                return arr[mid];
            }


            else if(arr[mid]==arr[mid-1]){

                int index=((mid-1)-0);

                if(index%2==0){
                    low=mid+1;
                }

                else{
                    high=mid-2;
                }
            }

            else{


                int index=(n-(mid+1));

                if(index%2==0){
                    high=mid-1;
                }

                else{
                    low=mid+2;
                }


            }


        }

        return -1;




        
    }
};