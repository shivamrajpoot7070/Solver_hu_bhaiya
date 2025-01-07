class Solution {
public:
    long long zeroFilledSubarray(vector<int>& arr) {

        int i=0;
        int j=0;
        int n=arr.size();
        long long  ct=0;
        long long zero=0;

        while(i<n){

            if(arr[i]!=0){

                if(zero>=1){
                long long  x=(zero*(zero+1))/2;
                ct+=x;
                cout<<x<<" ";
                zero=0;
                }
            }
            else{
                zero++;
            }

            i++;
        }

        if(zero>=1){
            ct+=(zero*(zero+1))/2;

        }

        

       
        return ct;
        
    }
};