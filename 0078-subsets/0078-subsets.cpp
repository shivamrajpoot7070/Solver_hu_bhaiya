class Solution {
public:
    void find(vector<int>& arr,vector<vector<int>>&ans, vector<int>temp,int i){


        if(i==arr.size()){
            ans.push_back(temp);
            return;
        }

        temp.push_back(arr[i]);

        find(arr,ans,temp,i+1);   // pick call

        temp.pop_back();  // waps jate tym last wla hta do qki wo pick  ka part hai

        find(arr,ans,temp,i+1);

    }

    vector<vector<int>> subsets(vector<int>& arr) {


        vector<int>temp;
        vector<vector<int>>ans;
        int i=0;

        find(arr,ans,temp,i);

        return ans;
        
    }
};