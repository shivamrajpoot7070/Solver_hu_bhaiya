class Solution {
public:
    typedef pair<int,int>p;
    int eraseOverlapIntervals(vector<vector<int>>& arr) {

        vector<p>v;

        for(int i=0;i<arr.size();i++){
            int st=arr[i][0];
            int ed=arr[i][1];

            v.push_back({ed,st});
        }

        sort(v.begin(),v.end());

        int currend=-1;

        int ct=0;

        for(int i=0;i<v.size();i++){

            int start=v[i].second;
            int end=v[i].first;

            if(start>=currend){
                currend=end;
            }

            else{
                ct++;
            }
        }


        return ct;
        
    }
};