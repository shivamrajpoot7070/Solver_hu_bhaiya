class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& arr) {


        int neg=0;
        int maxi=INT_MAX;
        long long sum=0;

        for(int i=0;i<arr.size();i++){

            for(int j=0;j<arr[0].size();j++){

                if(arr[i][j]<=0){
                    neg++;
                    
                }
                sum+=abs(arr[i][j]);
                maxi=min(maxi,abs(arr[i][j]));
            }

        }

        if(neg%2==0){
            return sum;
        }

        return sum-(2*maxi);
        
    }
};