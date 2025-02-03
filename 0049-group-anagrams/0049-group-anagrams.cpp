class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {

        vector<pair<string,int>>v;


        for(int i=0;i<str.size();i++){

            string temp=str[i];

            sort(temp.begin(),temp.end());

            v.push_back({temp,i});
        }


        sort(v.begin(),v.end());


        vector<vector<string>>ans;

        vector<string>temp;

        temp.push_back(str[v[0].second]);

        string m=v[0].first;

        for(int i=1;i<v.size();i++){

            if(v[i].first==m){
                temp.push_back(str[v[i].second]);
            }

            else{
                ans.push_back(temp);
                temp.clear();
                m=v[i].first;
                temp.push_back(str[v[i].second]);
            } 
        }

        ans.push_back(temp);

        return ans;
        
    }
};