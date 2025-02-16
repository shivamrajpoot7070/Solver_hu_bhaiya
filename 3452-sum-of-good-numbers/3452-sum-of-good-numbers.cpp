class Solution {
public:
    int sumOfGoodNumbers(vector<int>& arr, int k) {

        int sum=0;

        for(int i=0;i<arr.size();i++){

            int prev=i-k;
            int aage=i+k;


            if(prev>=0 && aage<=arr.size()-1){

                if(arr[i]>arr[prev] && arr[i]>arr[aage]){
                    sum+=arr[i];
                }
            }

            else{

                if(prev<0 && aage<=arr.size()-1){

                    if(arr[i]>arr[aage]){
                        sum+=arr[i];
                    }
                }

                if(aage>=arr.size() && prev>=0){

                    if(arr[i]>arr[prev]){
                        sum+=arr[i];
                    }
                }
                
            }
        }

        return sum;
        
    }
};