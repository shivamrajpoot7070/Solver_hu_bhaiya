class Solution {
public:
    long long find(vector<int>&arr, int amount,int i){


        if(i>=arr.size()){

            if(amount==0){
                return 1;
            }

            return INT_MAX;
        }


        if(amount==0){
            return 1;
        }


        if(amount<0){
            return INT_MAX;
        }

        long long take=1+find(arr,amount-arr[i],i);
        long long nott=find(arr,amount,i+1);

        return min(take,nott);



    }

    int coinChange(vector<int>&arr, int amount) {
        int i=0;
        long long val=find(arr,amount,i);
        if(val==INT_MAX){
            return -1;
        }

        return val-1;
        
    }
};