class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>&arr, int k) {

        unordered_map<int,int>mpp;


        int i=0;
        int n=arr.size();
        int j=0;

        while(i<n && j<n){

            if(j-i+1==k){

                int maxi=-1;
                bool flag=true;

                for(int k=i;k<=j;k++){

                    if(arr[k]>maxi){
                        maxi=arr[k];
                    }
                    else{
                        flag=false;
                    }
                }

                if(flag){
                    mpp[i]++;
                }

                i++;
            }

            j++;
        }


        for(auto it:mpp){
            int ele=it.first;
            if(mpp.find(ele+k)!=mpp.end()){
                return true;
            }
        }

        return false;

        
    }
};