class Solution {
public:
    int diagonalSum(vector<vector<int>>& arr) {




        int n=arr.size();
        int m=arr[0].size()-1;


        int sum=0;


        for(int i=0;i<n;i++){   // left side diagonal
            sum+=arr[i][i];
        }


        for(int i=0;i<n;i++){

            if(i==m){
                m--;
                continue;
            }

            else{
                sum+=arr[i][m];
                m--;
            }

        }


        return sum;


        
        
    }
};