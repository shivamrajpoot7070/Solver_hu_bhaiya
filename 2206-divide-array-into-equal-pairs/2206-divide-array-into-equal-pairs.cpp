class Solution {
public:
    bool divideArray(vector<int>& arr) {
        
        unordered_map<int,int>mpp;

        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }

        int n=arr.size();

        for(auto it:mpp){
            if(it.second%2!=0){
                return false;
            }
        }

        return true;

    }
};