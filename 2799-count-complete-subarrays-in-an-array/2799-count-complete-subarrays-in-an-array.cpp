class Solution {
public:
    int countCompleteSubarrays(vector<int>&arr) {

        

        set<int>st;


        for(int i=0;i<arr.size();i++){
            st.insert(arr[i]);
        }

        int k=st.size();

        int ct=0;

        for(int i=0;i<arr.size();i++){

            unordered_map<int,int>mpp;

            for(int j=i;j<arr.size();j++){

                mpp[arr[j]]++;

                if(mpp.size()==k){
                    ct++;
                }
            }
        }

        return ct;
        
    }
};