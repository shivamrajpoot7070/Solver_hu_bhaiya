class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {

        int zero=0;


        int i=0;
        int j=0;
        int maxi=INT_MIN;


        while(i<arr.size() && j<arr.size()){

            if(arr[j]==0){
                zero++;
            }

            if(zero>k){
                while(zero>k){
                    if(arr[i]==0){
                        zero--;
                    }
                    i++;
                }

                maxi=max(maxi,j-i+1);
            }
            else{
                maxi=max(maxi,j-i+1);
            }
            j++;
        }
        return maxi;


    }
};