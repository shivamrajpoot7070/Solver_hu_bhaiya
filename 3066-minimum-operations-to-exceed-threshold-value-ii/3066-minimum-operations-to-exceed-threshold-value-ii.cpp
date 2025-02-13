class Solution {
public:
    int minOperations(vector<int>& arr, int k) {

        priority_queue<long long,vector<long long>,greater<long long>>pq;

        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
        }

        int ct=0;

        while(pq.top()<k && pq.size()>=2){

            int first=pq.top();
            pq.pop();
            int sec=pq.top();
            pq.pop();

            long long x=min(first,sec);
            x=x*2;
            long long y=max(first,sec);
            long long num=x+y;
            ct++;
            pq.push(num);

        }

        return ct;
        
    }
};