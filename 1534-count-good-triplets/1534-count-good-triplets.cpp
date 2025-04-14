class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        
        //sort(arr.begin(),arr.end());
        int i=0;
        int j=0;
        int k=0;
        int ct=0;

        for(int i=0;i<arr.size()-2;i++){

            for(int j=i+1;j<arr.size()-1;j++){

                for(int k=j+1;k<arr.size();k++){
                    if(abs(arr[k]-arr[i])<=c){
                        if(abs(arr[i]-arr[j])<=a && abs(arr[j]-arr[k])<=b){
                            ct++;
                        }
                    }
                }
            }
        }

        return ct;
    }

};