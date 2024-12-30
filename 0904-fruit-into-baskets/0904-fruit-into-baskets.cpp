class Solution {
public:
    int totalFruit(vector<int>&arr) {

        unordered_map <int,int>mpp;
        int i=0;
        int j=0;

        int n=arr.size();

        int maxi=1;

        while(j<n){


            mpp[arr[j]]++;


            while(mpp.size()>2){

                mpp[arr[i]]--;

                if(mpp[arr[i]]==0){
                    mpp.erase(arr[i]);
                }

                i++;
            }
            maxi=max(maxi,j-i+1);
            j++;

        }

        return maxi;


        
    }
};