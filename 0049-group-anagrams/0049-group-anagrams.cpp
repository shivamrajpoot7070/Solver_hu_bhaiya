class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        

        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mpp;

        for(int i=0;i<str.size();i++){

            string temp=str[i];

            sort(temp.begin(),temp.end());


            mpp[temp].push_back(str[i]);
        }

        for(auto it:mpp){
            ans.push_back(it.second);
        }


        return ans;
    }
};