class Solution {
public:
    int longestSubarray(vector<int>& arr, int lim) {


        map<int,int>mpp;


        int i=0;
        int j=0;

        int maxi=INT_MIN;
        int n=arr.size();

        while(i<n && j<n){

            mpp[arr[j]]++;

            while(abs(mpp.rbegin()->first-mpp.begin()->first)>lim){
                mpp[arr[i]]--;

                if(mpp[arr[i]]==0){
                    mpp.erase(arr[i]);
                }
                i++;
            }

            int l=j-i+1;

            maxi=max(maxi,l);

            j++;
        }


            return maxi;
        
    }
};