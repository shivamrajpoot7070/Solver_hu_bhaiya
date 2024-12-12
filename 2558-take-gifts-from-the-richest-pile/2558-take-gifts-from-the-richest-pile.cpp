class Solution {
public:
    long long pickGifts(vector<int>& arr, int k) {

       priority_queue<int>pq(arr.begin(),arr.end());  // push into max heap


       while(k--){
        int num=pq.top();
        pq.pop();

        int sq=floor(sqrt(num));

        pq.push(sq);
       }

       long long s=0;


       while(pq.size()>0){

        s+=pq.top();
        pq.pop();

       }

       return s;



    }
};