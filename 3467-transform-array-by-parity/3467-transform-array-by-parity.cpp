class Solution {
public:
    vector<int> transformArray(vector<int>& arr) {
    
        for(int i=0;i<arr.size();i++){

            if(arr[i]%2==0){
                arr[i]=0;
            }
            else{
                arr[i]=1;
            }
        }

        sort(arr.begin(),arr.end());

        return arr;
    }
};