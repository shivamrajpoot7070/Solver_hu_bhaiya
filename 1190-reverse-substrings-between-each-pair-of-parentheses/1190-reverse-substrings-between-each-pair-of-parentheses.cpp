class Solution {
public:
    string reverseParentheses(string str) {
        
        stack<char>st;


        for(int i=0;i<str.length();i++){


            if(str[i]!=')'){
                st.push(str[i]);
            }

            else{

                string rev="";

                while(st.size()>0 && st.top()!='('){
                    rev+=st.top();
                    st.pop();
                }

                st.pop();

                if(i==str.length()-1){
                    return rev;
                }

                for(int j=0;j<rev.length();j++){
                    st.push(rev[j]);
                }
            }
        }

        string ans="";

        while(st.size()>0){

            ans+=st.top();
            st.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;

        
    }
};