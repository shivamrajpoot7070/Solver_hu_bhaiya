class Solution {
public:
    int maxProfitAssignment(vector<int>& diff, vector<int>& pro, vector<int>& work) {

        vector<pair<int,int>>v;

        for(int i=0;i<diff.size();i++){
            v.push_back({diff[i],pro[i]});
        }
        sort(v.begin(),v.end());
        //sort(work.begin(),work.end(),greater<int>());

        int profit=0;
        int j=0;

        int sum=0;

        for(int i=0;i<work.size();i++){

            if(work[i]>=v[j].first){
                int maxi=0;
                while(j<v.size() && v[j].first<=work[i]){
                    maxi=max(maxi,v[j].second);
                    j++;
                }
                profit+=maxi;
                j=0;
            }
        }

        return profit;

    }
};
