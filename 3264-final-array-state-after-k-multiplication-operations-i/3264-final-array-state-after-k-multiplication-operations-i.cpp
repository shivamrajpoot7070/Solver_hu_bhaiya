class Solution {
public:
     typedef pair<int,int>p;
    vector<int> getFinalState(vector<int>& arr, int k, int mult) {

        priority_queue<p,vector<p>,greater<p>>pq;


        for(int i=0;i<arr.size();i++){
            pq.push({arr[i],i});
        }


        while(k--){

            int val=pq.top().first;
            int idx=pq.top().second;
            pq.pop();

            val=val*mult;

            arr[idx]=val;

            pq.push({val,idx});

        }

        return arr;


        
    }
};