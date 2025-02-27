class Solution {
public:
    typedef pair<int,string>p;
    vector<string> topKFrequent(vector<string>& arr, int k) {
        
        vector<string>ans;
        priority_queue<p,vector<p>,greater<p>>pq;

        map<string,int>mpp;

        map<int,int>count;

        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }

        for(auto it:mpp){
            pq.push({-(it.second),it.first});
            count[it.second]++;
        }
        vector<int>ct;

        while(k--){
            ans.push_back(pq.top().second);
            // ct.push_back(pq.top().first);
            pq.pop();
        }

        // int i=0;

        // while(i<ct.size()){
        //     int dup=count[ct[i]];

        //     if(dup>1){
        //         sort(ans.begin()+i,ans.begin()+dup);
        //     }
        //     i+=dup;
        // }

        return ans;
    }
};