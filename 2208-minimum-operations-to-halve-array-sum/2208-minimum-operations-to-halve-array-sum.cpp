class Solution {
public:
    int halveArray(vector<int>& arr) {

        double sum=accumulate(arr.begin(),arr.end(),0);
         double total=sum;

        priority_queue<int>pq(arr.begin(),arr.end());

        double tar=sum/2;


        double diff=0;
        int ct=0;

        while(diff<=tar){

            double maxi=pq.top();

            double half=maxi/2;

            sum=sum-half;

            diff=total-sum;
            ct++;
            pq.pop();

            pq.push(half);
        }

        return ct;


    }
};