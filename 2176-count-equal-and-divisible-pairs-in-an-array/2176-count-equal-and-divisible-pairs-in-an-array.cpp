class Solution {
public:
    int countPairs(vector<int>&arr, int k) {
        
        map<int,vector<int>>mpp;

        for(int i=0;i<arr.size();i++){
            mpp[arr[i]].push_back(i);
        }

        int ct=0;

        for(int i=0;i<arr.size();i++){

            if(mpp.find(arr[i])!=mpp.end()){

                for(auto [ind,v]:mpp){

                    if(ind!=arr[i]){
                        continue;
                    }
                    else{

                    for(int j=0;j<v.size();j++){
                        if(v[j]>i){
                            if((v[j]*i)%k==0){
                                ct++;
                            }
                        }
                    }
                    }
                }
            }
        }

        return ct;

    }
};