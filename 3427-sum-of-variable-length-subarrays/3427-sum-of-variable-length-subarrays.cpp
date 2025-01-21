class Solution {
public:
    int subarraySum(vector<int>&arr) {


        long long sum=0;



        for(int i=0;i<arr.size();i++){

            int start=max(0,i-arr[i]);

            while(start<=i){
                sum+=arr[start];
                start++;
            }
        }

        return sum;
        
    }
};