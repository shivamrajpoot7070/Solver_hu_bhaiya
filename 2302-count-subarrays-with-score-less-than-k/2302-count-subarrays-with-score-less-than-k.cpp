class Solution {
public:
    long long countSubarrays(vector<int>& arr, long long k) {
        
        long long ans=0;
        int i=0;
        int j=0;

        long long sum=0;


        while(i<arr.size() && j<arr.size()){

            sum+=arr[j];

            while(i<=j && sum*(j-i+1)>=k){
                sum-=arr[i];
                i++;
            }

            ans+=j-i+1;
            j++;
        }


        return ans;


    }
};