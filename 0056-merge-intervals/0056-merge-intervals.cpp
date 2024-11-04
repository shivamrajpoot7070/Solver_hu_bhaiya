class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {

        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());

        priority_queue<pair<int,int>>pq;

      //  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;


        for(int i=0;i<arr.size();i++){

            int start=arr[i][0];
            int end=arr[i][1];


            if(pq.size()>0 && pq.top().first>=start){
               // pq.top().first=end;

                
                int mini=min(pq.top().second,start);
                int maxi=max(pq.top().first,end);
                int ed=maxi;
                int st=mini;

                pq.pop();
                pq.push({ed,st});
            }

            else{

                pq.push({end,start});
            }

        }

        while(pq.size()>0){

            vector<int>temp;

            temp.push_back(pq.top().second);
            temp.push_back(pq.top().first);


            ans.push_back(temp);

            pq.pop();
        }





        

        return ans;
        
    }
};