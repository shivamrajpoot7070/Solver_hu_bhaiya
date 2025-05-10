class Solution {
public:
    int triangularSum(vector<int>&arr) {


        while(arr.size()>1){
            vector<int>temp;

            for(int i=0;i<arr.size()-1;i++){
                int sum=arr[i]+arr[i+1];
                sum=sum%10;
                temp.push_back(sum);
            }
            arr=temp;
        }

        return arr[0];
        
    }
};