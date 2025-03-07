class Solution {
public:
    int maximalSquare(vector<vector<char>>& arr) {


        // int row=arr.size()-1;
        // int col=arr[0].size()-1;

        // int ans=0;

        // for(int i=0;i<=row;i++){

        //     for(int j=0;j<=col;j++){
            
        //       if(arr[i][j]=='1'){

        //         int niche=row-i;
        //         int aage=col-j;

        //         int k=min(niche,aage);

        //         while(k>=0){
        //             bool flag=true;
        //             for(int l=i;l<=i+k;l++){
        //                 for(int m=j;m<=j+k;m++){
        //                     if(arr[l][m]!='1'){
        //                         flag=false;
        //                         break;
        //                     }
        //                 }
        //             }

        //             if(flag){
        //                 int area=k+1;
        //                 area=area*area;
        //                 ans=max(ans,area);
        //             }
        //             k--;
        //         }
        //       }
        //     }
        // }

        // return ans;      

        int row = arr.size();
        int col = arr[0].size();
        int ans = 0;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (arr[i][j] == '1') { // Only check when the cell is '1'
                    int maxSize = min(row - i, col - j);

                    for (int k = 0; k < maxSize; k++) {
                        bool isValid = true;

                        // Check only the new row and column for optimization
                        for (int x = i; x <= i + k; x++) {
                            if (arr[x][j + k] != '1') {
                                isValid = false;
                                break;
                            }
                        }
                        for (int y = j; y <= j + k; y++) {
                            if (arr[i + k][y] != '1') {
                                isValid = false;
                                break;
                            }
                        }

                        if (isValid) {
                            int area = (k + 1) * (k + 1);
                            ans = max(ans, area);
                        } else {
                            break; // Stop checking larger squares if current fails
                        }
                    }
                }
            }
        }
        return ans;  
    }
};