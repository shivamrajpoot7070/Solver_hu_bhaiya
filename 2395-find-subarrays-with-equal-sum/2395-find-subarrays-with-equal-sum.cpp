class Solution {
public:
    bool findSubarrays(vector<int>& arr) {

        unordered_map<int,int>mpp;

        for(int i=0;i<arr.size()-1;i++){
            int sum=arr[i]+arr[i+1];

            if(mpp.find(sum)!=mpp.end() && mpp[sum]!=i){
                return true;
            }
            else{
                mpp[sum]=i;
                sum=0;
            }
        }

        return false;
        
    }
};