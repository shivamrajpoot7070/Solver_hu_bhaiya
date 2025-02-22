class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int maxi=*max_element(arr.begin(),arr.end());

        vector<int>hash(maxi+1,0);


        for(int i=0;i<arr.size();i++){
            hash[arr[i]]++;
        }

        for(int i=1;i<=maxi;i++){

            if(hash[i]==0){
                k--;
            }

            if(k==0){
                return i;
            }
        }


        return maxi+k;

    }
};