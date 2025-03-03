class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        

        // vector<vector<string>>ans;
        // unordered_map<string,vector<string>>mpp;

        // for(int i=0;i<str.size();i++){

        //     string temp=str[i];

        //     sort(temp.begin(),temp.end());


        //     mpp[temp].push_back(str[i]);
        // }

        // for(auto it:mpp){
        //     ans.push_back(it.second);
        // }


        // return ans;


        vector<vector<string>>ans;

        unordered_map<string,vector<string>>mpp;

        for(int i=0;i<str.size();i++){

            vector<int>hash(26,0);

            string temp=str[i];

            for(int j=0;j<temp.length();j++){
                hash[temp[j]-'a']++;
            }

            string total="";

            for(int j=0;j<hash.size();j++){
                total+=to_string(hash[j])+"#";
            }
            mpp[total].push_back(temp);
        }

        for(auto it:mpp){
            ans.push_back(it.second);
        }


        //sort(ans.begin(),ans.end());

        return ans;

    }
};