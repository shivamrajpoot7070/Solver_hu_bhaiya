class Solution {
public:

    const int mod=1e9+7;
    int numOfSubarrays(vector<int>& arr) {
        

        long long even=0;
        long long sum=0;
        long long odd=0;

        long long oddct=0;


        for(int i=0;i<arr.size();i++){

            sum+=arr[i];

            if(sum%2==0){
                oddct+=odd;
                even++;
            }
            else{
                oddct+=even+1;
                odd++;
            }
        }

        return oddct%mod;

    }
};