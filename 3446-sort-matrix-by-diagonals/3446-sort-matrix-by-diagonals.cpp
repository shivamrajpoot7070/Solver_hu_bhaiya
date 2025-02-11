class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& arr) {

        unordered_map<int,vector<int>>mpp;

        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[i].size();j++){
                mpp[i-j].push_back(arr[i][j]);
            }
        }

        for(auto &it:mpp){
            sort(it.second.begin(),it.second.end());
        }

        for(int i=arr.size()-1;i>=0;i--){
            for(int j=arr[i].size()-1;j>=0;j--){
                if(i-j<0){
                    arr[i][j]=mpp[i-j].back();
                    mpp[i-j].pop_back();
                }
            }
        }

        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[i].size();j++){
                if(i-j>=0){
                    arr[i][j]=mpp[i-j].back();
                    mpp[i-j].pop_back();
                }
            }
        }

        return arr;
    }
};