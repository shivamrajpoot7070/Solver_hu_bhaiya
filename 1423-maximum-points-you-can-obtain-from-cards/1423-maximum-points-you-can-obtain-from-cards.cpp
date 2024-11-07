class Solution {
public:
    int maxScore(vector<int>& arr, int k) {

        int ksum=0;

        for(int i=0;i<k;i++){

            ksum+=arr[i];
        }

        int ind=k-1;

        int maxi=ksum;
        int j=arr.size();


        for(int i=0;i<k;i++){

            if(ind>=0){

                ksum-=arr[ind];
                ind--;
                j--;
                ksum+=arr[j];
                maxi=max(maxi,ksum);
            }

            else{
                break;
            } 
        }

        return maxi;



        
    }
};