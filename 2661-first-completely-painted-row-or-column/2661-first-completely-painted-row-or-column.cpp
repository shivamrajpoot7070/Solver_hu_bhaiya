class Solution {
public:
    int firstCompleteIndex(vector<int>& str, vector<vector<int>>&arr) {

        map<int,pair<int,int>>mpp;

        map<int,int>row;
        map<int,int>col;

        int n=arr.size();
        int m=arr[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mpp[arr[i][j]]={i,j};
            }
        }

        for(int i=0;i<str.size();i++){

            int r=mpp[str[i]].first;
            int c=mpp[str[i]].second;

            row[r]++;
            col[c]++;

            if(row[r]==n || col[c]==m){
                return i;
            }

        }

        return -1;
        
    }
};