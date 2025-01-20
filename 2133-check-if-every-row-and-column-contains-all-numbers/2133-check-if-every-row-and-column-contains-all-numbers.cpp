class Solution {
public:
    bool checkValid(vector<vector<int>>&arr) {

        int n=arr.size();

        for(int i=0;i<arr.size();i++){

            map<int,int>mpp;

            for(int j=0;j<arr[i].size();j++){
                mpp[arr[i][j]]++;
            }

            if(mpp.size()!=n){
                return false;
            }
        }

        int row=arr.size();
        int col=arr[0].size();


        for(int i=0;i<col;i++){

            map<int,int>mpp;

            for(int j=0;j<row;j++){
                mpp[arr[j][i]]++;
            }

            if(mpp.size()!=n){
                return false;
            }
        }

        return true;
        
    }
};