class Solution {
public:
    bool checkIfExist(vector<int>& arr) {

        unordered_map<int,int>mpp;

        for(int i=0;i<arr.size();i++){
           mpp[arr[i]]=i;
        }

    for(int i=0;i<arr.size();i++){

        int val=arr[i]*2;

            if(mpp.find(val)!=mpp.end() && mpp[val]!=i){
                return true;
            }
        }
    

        return false;
        
    }
};