class Solution {
public:

    int n;
    int m;
    int res;

    void backtrack(vector<vector<int>>arr,int ct,int obst,int i,int j){

        if(i<0 || i>=n || j>=m || j<0 || arr[i][j]==-1){
            return;
        }

        if(arr[i][j]==2){
            if(ct==obst){
                res++;
            }
            return;
        }

        arr[i][j]=-1;

        backtrack(arr,ct+1,obst,i,j+1);  // right
        backtrack(arr,ct+1,obst,i,j-1);  // left
        backtrack(arr,ct+1,obst,i+1,j);  // down
        backtrack(arr,ct+1,obst,i-1,j);   // up

        //arr[i][j]=0;
    }
    int uniquePathsIII(vector<vector<int>>&arr) {

         n=arr.size();
        m=arr[0].size();
        res=0;

        int obst=1;

        int stx=-1;
        int sty=-1;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==0){
                    obst++;
                }

                if(arr[i][j]==1){
                    stx=i;
                    sty=j;
                }
            }
        }

        int ct=0;
        backtrack(arr,ct,obst,stx,sty);

        return res;
        
    }
};