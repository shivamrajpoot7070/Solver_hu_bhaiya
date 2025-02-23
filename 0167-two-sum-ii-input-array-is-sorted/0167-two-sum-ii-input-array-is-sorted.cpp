class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tar) {

        int i=0;
        int j=arr.size()-1;

        vector<int>ans;


        while(i<j){


            int sum=0;

            sum=arr[i]+arr[j];

            if(sum==tar){
                return {i+1,j+1};
            }

            else if(sum>tar){
                j--;
            }

            else{
                i++;
            }
        }

        return {-1,-1};
        
    }
};