class Solution {
public:
    vector<int> numberOfPairs(vector<int>&arr) {

        int pair=0;
        int notp=0;

        priority_queue<int>pq;

        for(int i=0;i<arr.size();i++){
            pq.push(arr[i]);
        }

        while(pq.size()>1){
            int fst=pq.top();
            pq.pop();
            int second=pq.top();
            pq.pop();

            if(fst==second){
                pair++;
            }
            else{
                notp++;
                pq.push(second);
            }
        }

        notp+=pq.size();

        return {pair,notp};
        

    }
};