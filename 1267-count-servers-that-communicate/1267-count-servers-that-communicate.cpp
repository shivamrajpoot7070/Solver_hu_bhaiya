class Solution {
public:

    int countServers(vector<vector<int>>& arr) {

        int n=arr.size();
        int m=arr[0].size();

        vector<int>row(n,0);
         vector<int>col(m,0);
        int ans=0;

         for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){

                if(arr[i][j]==1){
                    row[i]++;    // is row me jo aaye increment kr de
                    col[j]++;
                }
            }
         }


         for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){

                if(arr[i][j]==1){

                    if(row[i]>1 || col[j]>1){  // is row ya column me koi or hai to connect ho gya 
                        ans++;
                    }
                }
            }
         }

         return ans;


    
    }
};