class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& arr, int k) {

        int ct=0;

        int pro=1;

        int i=0;
        int j=0;

        while(i<arr.size() && j<arr.size()){

            pro=pro*arr[j];

            if(pro<k){
                ct+=j-i+1;
            }
            else{
                while(i<=j && pro>=k){
                    pro=pro/arr[i];
                    i++;
                }
                ct+=j-i+1;
            }

            j++;
        }

        return ct;
        
    }
};