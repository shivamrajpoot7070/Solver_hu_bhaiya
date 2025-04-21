class Solution {
public:
    int numSubarraysWithSum(vector<int>& arr, int k) {

            map<int,int>mpp;

            mpp[0]=1;

            
            int sum=0;

            int ct=0;

            for(int i=0;i<arr.size();i++){
                sum+=arr[i];

                if(mpp.find(sum-k)!=mpp.end()){
                    ct+=mpp[sum-k];
                }
                mpp[sum]++;
            }

            return ct;
        
    }
};