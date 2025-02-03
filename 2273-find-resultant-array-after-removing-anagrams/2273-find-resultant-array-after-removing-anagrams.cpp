class Solution {
public:
    vector<string> removeAnagrams(vector<string>&arr) {

        vector<string>copy(arr);

        vector<int>hash(26,0);

        vector<string>ans;
        string temp=arr[0];


        for(int i=0;i<temp.length();i++){
            hash[temp[i]-'a']++;
        }
        int ind=0;
        for(int i=1;i<arr.size();i++){

            vector<int>h(26,0);

            string t=arr[i];

            for(int i=0;i<t.length();i++){
                h[t[i]-'a']++;
            }

            if(h==hash){
                continue;
            }

            else{
                ans.push_back(arr[ind]);
                ind=i;
                for(int i=0;i<26;i++){
                    hash[i]=0;
                }

                string g=arr[i];

                for(int i=0;i<g.length();i++){
                    hash[g[i]-'a']++;
                }
            }
        }

        ans.push_back(arr[ind]);

        return ans;


    }
};