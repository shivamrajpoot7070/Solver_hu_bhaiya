class Solution {
public:
    int minimumOperations(vector<int>& arr) {

        unordered_map <int,int>mpp;


        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }


        if(arr.size()<=3){

            if(mpp.size()!=arr.size()){
                return 1;
            }
            else{
                return 0;
            }
            
        }

        int n=arr.size();

        int i=0;
        int j=n-1;
        int ct=0;

        while(i<n && i!=j){

            if(mpp.size()<j-i+1){

                for(int x=0;x<3;x++){

                    if(i<n){
                        mpp[arr[i]]--;

                    if(mpp[arr[i]]==0){
                        mpp.erase(arr[i]);
                    }
                    i++;

                    }
                }
                ct++;
            }

            else{

                return ct;
            }

        }




        return ct;
        
    }
};