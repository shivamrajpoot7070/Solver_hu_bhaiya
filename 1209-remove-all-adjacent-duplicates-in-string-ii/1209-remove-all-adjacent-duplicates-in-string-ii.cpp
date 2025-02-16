class Solution {
public:
    string removeDuplicates(string str, int k) {
        
        stack<pair<char,int>>st;

        for(int i=0;i<str.length();i++){

            if(st.size()>0 && str[i]==st.top().first){
                st.top().second++;

                if(st.top().second==k){
                    st.pop();
                }
            }
            else{
                st.push({str[i],1});
            }
        }

        string ans="";

        while(st.size()>0){
            int tym=st.top().second;
            char x=st.top().first;
            while(tym--){
                ans+=x;
            }
            st.pop();
        }


        reverse(ans.begin(),ans.end());


        return ans;
    }
};