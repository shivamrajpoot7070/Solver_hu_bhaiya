class Solution {
public:
    int lengthOfLongestSubstring(string arr) {

        unordered_map<int,int>mpp;


        // if(arr.length()==0){
        //     return
        // }

        int len=0;


        int i=0;
        int n=arr.length();

        int j=0;

        while(i<n && j<n){

            mpp[arr[j]]++;

            while(mpp.size()<j-i+1){
                mpp[arr[i]]--;

                if(mpp[arr[i]]==0){
                    mpp.erase(arr[i]);
                }
                i++; 
            }

            len=max(len,j-i+1);
            j++;
        } 


        return len;
        
    }
};