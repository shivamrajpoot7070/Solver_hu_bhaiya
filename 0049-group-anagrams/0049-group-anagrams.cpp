class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {


      vector<string>copy=strs;
      vector<vector<string>>ans;


      for(int i=0;i<copy.size();i++){

        sort(copy[i].begin(),copy[i].end());

      }

      set<string>s;


      for(int i=0;i<copy.size();i++){

        s.insert(copy[i]);

      }


      for(auto it=s.begin();it!=s.end();it++){

        vector<string>temp;


        for(int i=0;i<copy.size();i++){


          if(*it==copy[i]){

            temp.push_back(strs[i]);

          }

        }

        ans.push_back(temp);




      }

      return ans;



     
     }
};