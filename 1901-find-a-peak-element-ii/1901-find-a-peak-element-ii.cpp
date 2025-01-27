class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& arr) {

        vector<int>v;


        int n=arr.size();
        int m=arr[0].size();

        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[i].size();j++){

                bool top=true;
                bool down=true;
                bool left=true;
                bool right=true;


                // top

                if(i-1>=0 && j>=0){

                    if(arr[i-1][j]<arr[i][j]){
                        top=true;
                    }
                    else{
                        top=false;
                    }
                }

                // down

                if(i+1<=n-1 && j<=m-1){

                    if(arr[i+1][j]<arr[i][j]){
                        down=true;
                    }
                    else{
                        down=false;
                    }
                }


                // left

                 if(j-1>=0 && i>=0){

                    if(arr[i][j-1]<arr[i][j]){
                        left=true;
                    }
                    else{
                        left=false;
                    }
                }

                // right

                if(j+1<=m-1 && i<=n-1){

                    if(arr[i][j+1]<arr[i][j]){
                        right=true;
                    }
                    else{
                        right=false;
                    }
                }


                if(top && down && right && left){
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }

        return v;
        
    }
};