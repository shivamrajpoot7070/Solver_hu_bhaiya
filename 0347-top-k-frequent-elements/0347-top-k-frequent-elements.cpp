class Solution {
public:
    
    typedef pair<int,int>p;
    vector<int> topKFrequent(vector<int>&arr, int k) {
        unordered_map<int,int>mpp;
        
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        
        priority_queue<p>pq;
        
        for(auto it:mpp){
            pq.push({it.second,it.first});
        }

        
        
        // while(){
        //     cout<<pq.top().first<<pq.top().second;
        //     cout<<"\n";
        //     pq.pop();
        // }
        
        vector<int>v;
        
        while(k--){
            
            int tym=pq.top().first;
            int num=pq.top().second;
            
            v.push_back(num);
            pq.pop();
            
        }
        
        return v;
        
    }
};