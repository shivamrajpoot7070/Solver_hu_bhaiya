class Solution {
public:

    int find(vector<vector<int>>&arr,int n,int i,int j){


        if(i==n-1){
            return arr[i][j];
        }


        int down=arr[i][j]+find(arr,n,i+1,j);

        int diagonal=arr[i][j]+find(arr,n,i+1,j+1);


        return min(down,diagonal);


    }


    int minimumTotal(vector<vector<int>>&arr) {

        int n=arr.size();

        return find(arr,n,0,0);



    }
};