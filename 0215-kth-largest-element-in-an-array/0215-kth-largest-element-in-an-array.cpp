class Solution {
public:
    int findKthLargest(vector<int>&arr, int k) {

        priority_queue<int,vector<int>,greater<int>>pq; 


        for(int i=0;i<arr.size();i++){

            pq.push(arr[i]);

            if(pq.size()>k){
                pq.pop();  // k se jyda aaya to k-1 tk uda do chota wla top wla kth rhega
            }
        }

        return pq.top();
        
    }
};