class Solution {
public:
    long long find(int i,int amt,vector<int>&arr){

        if(amt<0 || i>=arr.size()){
            return INT_MAX;
        }

        if(amt==0){
            return 0;
        }

        long long take=1+find(i,amt-arr[i],arr);

        long long ntake=find(i+1,amt,arr);

        return min(take,ntake);

    }
    int coinChange(vector<int>&arr, int amount) {
        int i=0;

        if(find(i,amount,arr)==INT_MAX){
            return -1;
        }
        else{
            return find(i,amount,arr);
        }
    }
};