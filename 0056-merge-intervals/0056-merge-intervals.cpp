class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {

        sort(arr.begin(),arr.end());

        int maxi=arr[0][1];
        int mini=arr[0][0];

        cout<<maxi<<mini;

        vector<vector<int>>ans;

        for(int i=1;i<arr.size();i++){

            int currst=arr[i][0];
            int curred=arr[i][1];

            if(currst<=maxi){
                maxi=max(maxi,curred);
                mini=min(mini,currst);
            }
            else{
                ans.push_back({mini,maxi});
                mini=arr[i][0];
                maxi=arr[i][1];
            }
        }

        ans.push_back({mini,maxi});
        return ans;
    }
};