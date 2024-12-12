class Solution {
public:
    int minStoneSum(vector<int>& arr, int k) {

        priority_queue<int>pq(arr.begin(),arr.end());


        while(k--){

            int maxi=pq.top();
            int val=floor(maxi/2);
            pq.pop();
            int org=maxi-val;

            pq.push(org);
        }

        int s=0;

        while(pq.size()>0){

             s+=pq.top();
            pq.pop();
        }

        return s;


    }
};