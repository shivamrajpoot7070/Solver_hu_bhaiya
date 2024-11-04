class Solution {
public:



    int minGroups(vector<vector<int>>& arr) {


        priority_queue<int,vector<int>,greater<int>> pq;

        sort(arr.begin(),arr.end());

        for(int i=0;i<arr.size();i++){

            int strt=arr[i][0];
            int end=arr[i][1];


            if(pq.size()>0 && pq.top()<strt){
                pq.pop();
                pq.push(end);
            }


            else{
                pq.push(end);
            }

            


        }

        return pq.size();


    }

    
};