class Solution {
public:
    bool divideArray(vector<int>&arr) {

        map<int,int>mpp;

        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }

        for(auto it:mpp){

            if(it.second%2!=0){
                return false;
            }
        }

        return true;
    }
};