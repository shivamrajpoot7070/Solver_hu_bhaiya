class Solution {
public:
    typedef pair<int,int>p;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        vector<int>ans;

        priority_queue<p,vector<p>,greater<p>>pq;


        for(int i=0;i<arr.size();i++){

            int diff=abs(arr[i]-x);
            pq.push({diff,arr[i]});
        }

        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        sort(ans.begin(),ans.end());

        return ans;
        
        
    }
};