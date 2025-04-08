class Solution {
public:
    int minimumOperations(vector<int>&arr) {
        
        unordered_map<int,int>mpp;
        for(int x:arr){
            mpp[x]++;
        }

        int i=0;

        int ct=0;

        while(i<arr.size()){

            bool dup=false;

            for(auto it:mpp){
                if(it.second>1){
                    dup=true;
                    break;
                }
            }
            int k=3;

            if(dup==false){
                return ct;
            }

            ct++;

            while(k-- && i<arr.size()){
                mpp[arr[i]]--;

                if(mpp[arr[i]]==0){
                    mpp.erase(arr[i]);
                }
                i++;
            }

            if(i>=arr.size()){
                return ct;
            }
        }

        return ct;

    }
};