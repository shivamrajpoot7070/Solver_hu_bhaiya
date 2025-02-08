class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& que) {

        vector<int>ans;

        map<int,int>lim;
        map<int,int>col;

        //vector<int>ans;

        

        for(int i=0;i<que.size();i++){

            set<int>st;

            int ball=que[i][0];
            int color=que[i][1];

            lim[ball]=color;

            for(auto it:lim){
                st.insert(it.second);
            }

            ans.push_back(st.size());
        }


        return ans;
        
    }
};