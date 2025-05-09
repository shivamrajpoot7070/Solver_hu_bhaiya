class Solution {
public:
    vector<int> buildArray(vector<int>& arr) {

        vector<int>ans;


        for(int i=0;i<arr.size();i++){

            ans.push_back(arr[arr[i]]);
        }


        return ans;




        
    }
};