class Solution {
public:
    int minimumOperations(vector<vector<int>>& arr) {

        int row=arr.size();
        int col=arr[0].size();

        int ct=0;


        for(int j=0;j<col;j++){
            for(int i=1;i<row;i++){

                if(arr[i][j]<=arr[i-1][j]){

                int diff=abs((arr[i][j]-arr[i-1][j]))+1;

                arr[i][j]+=diff;

                ct+=diff;
                }

            }
        }
        
        return ct;
    }
};