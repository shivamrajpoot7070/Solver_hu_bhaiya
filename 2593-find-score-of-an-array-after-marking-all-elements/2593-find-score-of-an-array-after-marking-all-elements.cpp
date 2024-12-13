class Solution {
public:
    long long findScore(vector<int>& arr) {

       priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;


       for(int i=0;i<arr.size();i++){
        pq.push({arr[i],i});
       }

       set<int>st;

       long long sum=0;

       while(pq.size()>0){

        int ind=pq.top().second;

        if(st.find(ind)!=st.end()){
            pq.pop();
        }

        else{
            sum+=pq.top().first;
            st.insert(ind-1);
            st.insert(ind+1);
            st.insert(ind);
        }

       }

       return sum;


    


        
    }
};