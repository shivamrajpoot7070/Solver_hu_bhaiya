class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {


        unordered_map <int,int>mpp;

        int n=grid.size();
        int m=grid[0].size();


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mpp[grid[i][j]]++;
            }
        }

       // missing number

       vector<int>v(2);

       for(int i=1;i<=n*n;i++){

        if(mpp.find(i)==mpp.end()){
            v[1]=i;
        }
       }


       for(auto it:mpp){
        if(it.second>=2){
            v[0]=it.first;
        }
       }


       return v;



        
    }
};