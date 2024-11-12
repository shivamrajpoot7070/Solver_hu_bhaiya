class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>&arr, vector<int>& que) {

            sort(arr.begin(),arr.end());

        int index=0;

        int maxi=0;

        vector<int>ans;

        for(int i=0;i<que.size();i++){

            while(index<arr.size() && arr[index][0]<=que[i]){
                maxi=max(maxi,arr[index][1]);
                index++;
            }

        ans.push_back(maxi);


        }

        return ans;

    
    }

       
};