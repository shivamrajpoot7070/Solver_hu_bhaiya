class Solution {
public:
    long long countSubarrays(vector<int>& arr, int k) {
        
        unordered_map<int,int>mpp;

        int i=0;
        int j=0;

        int maxi=*max_element(arr.begin(),arr.end());

        int n=arr.size();
        long long ans=0;

        while(i<arr.size() && j<arr.size()){

            mpp[arr[j]]++;

            while(i<=j && mpp[maxi]==k){
                ans+=n-j;
                mpp[arr[i]]--;

                if(mpp[maxi]==0){
                    mpp.erase(maxi);
                }
                i++;
            }
            j++;
        }

        return ans;
    }
};