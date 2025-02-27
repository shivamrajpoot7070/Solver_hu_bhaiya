class Solution {
public:
    typedef pair<int,char>p;
    string frequencySort(string str) {

        unordered_map<char,int>mpp;

        priority_queue<p>pq;

        for(int i=0;i<str.length();i++){
            mpp[str[i]]++;
        }

        for(auto it:mpp){
            pq.push({it.second,it.first});
        }

        string ans="";

        while(pq.size()>0){

            int tym=pq.top().first;

            while(tym--){
                ans+=pq.top().second;
            }

            pq.pop();
        }

        return ans;

    }
};