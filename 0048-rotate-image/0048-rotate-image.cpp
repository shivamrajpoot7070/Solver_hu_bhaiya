class Solution {
public:
    void rotate(vector<vector<int>>&arr) {

        int row=arr.size();

        for(int i=0;i<row;i++){
            for(int j=0;j<=i;j++){
                swap(arr[i][j],arr[j][i]);
            }
        }


        for(int i=0;i<row;i++){
            reverse(arr[i].begin(),arr[i].end());
        }

        
    }
};