class Solution {
public:
    vector<int> topKFrequent(vector<int>&arr, int k) {

        unordered_map<int,int>mpp;

        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }

        priority_queue<pair<int,int>>pq;

        for(auto it:mpp){
            int num=it.first;
            int tym=it.second;
            pq.push({tym,num});
        }

        vector<int>ans;

        while(k--){
            int x=pq.top().second;
            ans.push_back(x);
            pq.pop();
        }

        return ans;
        
    }
};