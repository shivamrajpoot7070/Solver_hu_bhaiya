class Solution {
public:
    typedef pair<int,int>p;
    int maximumUnits(vector<vector<int>>&arr, int siz) {
        vector<p>v;

        for(int i=0;i<arr.size();i++){
            v.push_back({arr[i][1],arr[i][0]});
        }

        sort(v.begin(),v.end(),greater<p>());

        int total=0;

        for(int i=0;i<v.size();i++){

            if(v[i].second<=siz){
                total+=v[i].first*v[i].second;
                siz-=v[i].second;
            }
            else{
                total+=v[i].first*siz;
                return total;
            }
        }

        return total;
        
    }
};