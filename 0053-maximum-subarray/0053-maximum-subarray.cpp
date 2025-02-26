class Solution {
public:
    int maxSubArray(vector<int>&arr) {

        int maxi=INT_MIN;

        int sum=0;

        for(int i=0;i<arr.size();i++){

            sum+=arr[i];

            maxi=max(sum,maxi);

            if(sum<0){
                sum=0;
            }
        }

        return maxi;
        
    }
};