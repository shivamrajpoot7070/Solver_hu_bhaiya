class Solution {
public:

    void find(vector<vector<int>>& grid,int sum,int &mini,int ryt,int bottom,int n,int m){


        if(ryt>=m || bottom>=n){
            return;
        }


        sum+=grid[bottom][ryt];

        if(ryt==m-1 && bottom==n-1){
            mini=min(mini,sum);
            return;
        }

        find(grid,sum,mini,ryt,bottom+1,n,m);
        find(grid,sum,mini,ryt+1,bottom,n,m);

    }


    int minPathSum(vector<vector<int>>& grid) {

        int n=grid.size();
        int m=grid[0].size();

        int sum=0;
        int mini=INT_MAX;

        find(grid,sum,mini,0,0,n,m);

        return mini;
        
    }
};