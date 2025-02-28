class Solution {
public:
    vector<int> maxSubsequence(vector<int>& arr, int k) {
        
        priority_queue<int,vector<int>,greater<int>>pq;

        for(int i=0;i<arr.size();i++){

            pq.push(arr[i]);

            if(pq.size()>k){
                pq.pop();
            }
        }

        vector<int>ans;

        while(pq.size()>0){
            ans.push_back(pq.top());
            pq.pop();
        }

        return ans;
    }
};