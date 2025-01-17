class Solution {
public:
    int characterReplacement(string arr, int k) {

        unordered_map <char,int>mpp;
        int i=0;
        int j=0;

        int mct=0;

        int ans=INT_MIN;

        int n=arr.length();


        while(i<n && j<n){

            mpp[arr[j]]++;

            mct=max(mct,mpp[arr[j]]);

            while((j-i+1)-mct>k){

                mpp[arr[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;

        }

        return ans;
        
    }
};