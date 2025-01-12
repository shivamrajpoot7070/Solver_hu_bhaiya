class Solution {
public:
    int findPairs(vector<int>&arr, int k) {

        sort(arr.begin(),arr.end());

        int n=arr.size();
        int i=0;
        int j=n-1;

        int ct=0;


        while(i<n-1){

            j=n-1;

            while(j>i){

                int diff=arr[j]-arr[i];

                if(diff>k){
                    j--;
                }

                else if(diff==k){
                    ct++;
                    break;
                }
                else{
                    break;
                }

            }


            while(i+1<n && arr[i]==arr[i+1]){
                i++;
            }

            i++;


        }

        return ct;
        
    }
};