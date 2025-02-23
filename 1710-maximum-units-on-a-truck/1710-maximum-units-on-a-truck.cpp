class Solution {
public:
    int maximumUnits(vector<vector<int>>& box, int siz) {

        vector<pair<int,int>>v;

        for(int i=0;i<box.size();i++){

            int num=box[i][0];
            int unit=box[i][1];
            v.push_back({unit,num});
        }

        sort(v.begin(),v.end());

        int ans=0;
        for(int i=v.size()-1;i>=0;i--){

            if(v[i].second<=siz){
                ans+=v[i].first*v[i].second;
                siz-=v[i].second;
            }
            else{
                ans+=v[i].first*siz;
                break;
            }
        }

        return ans;


        
    }
};