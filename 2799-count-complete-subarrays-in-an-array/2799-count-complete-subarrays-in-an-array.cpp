class Solution {
public:
    int countCompleteSubarrays(vector<int>&arr) {

        int i=0;
        int j=0;

        set<int>st;
        int n=arr.size();

        for(int x:arr){
            st.insert(x);
        }

        int dist=st.size();

        unordered_map<int,int>mpp;

        int ct=0;

        while(i<arr.size() && j<arr.size()){

            mpp[arr[j]]++;

            while(mpp.size()==dist){
                ct+=n-j;
                mpp[arr[i]]--;
                if(mpp[arr[i]]==0){
                    mpp.erase(arr[i]);
                }
                i++;
            }
            j++;
        }

        return ct;
        
    }
};