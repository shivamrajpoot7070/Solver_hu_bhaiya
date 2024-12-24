class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& arr, vector<int>& v) {

        int ts=v[0];
        int te=v[1];

        vector<vector<int>>ans;

        int n=arr.size();


        if(arr.size()==0){
            ans.push_back({ts,te});
            return ans;
        }

          int mi=-1;
          int ma=-1;

        if(arr.size()==1){

            int st=arr[0][0];
            int ed=arr[0][1];

            if((ed<=te && ed>=ts) ||(te>=st && te<=ed)){

            mi=min(ts,arr[0][0]);
            ma=max(te,arr[0][1]);

            ans.push_back({mi,ma});
            return ans;

            }

            else{

                if(st>te){
                    ans.push_back({ts,te});
                    ans.push_back({st,ed});
                }

                else{
                    ans.push_back({st,ed});
                    ans.push_back({ts,te});
                }
                
                
                return ans;
            }
            
        }

        int index=-1;

        int i=0;


        for(i;i<arr.size();i++){

          vector<int>temp;

          int start=arr[i][0];
          int end=arr[i][1];

          if(start==te || (end<=te && end>=ts) ||(te>=start && te<=end)){
            ts=min(ts,start);
            te=max(te,end);
          }

          else if(end<ts){
            ans.push_back({start,end});
          }

          else{
            ans.push_back({ts,te});
            ts=-1;
            te=-1;
            break;
          }
 
        }

        if(ts!=-1 && te!=-1){
            ans.push_back({ts,te});
        }

        for(i;i<n;i++){
            int st=arr[i][0];
            int ed=arr[i][1];

            ans.push_back({st,ed});
        }



        return ans;

    }
};