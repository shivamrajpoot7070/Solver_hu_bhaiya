class Solution {
public:
    bool checkString(string str) {

        stack<char>st;

        for(int i=0;i<str.length();i++){

            if(str[i]=='b'){
                st.push(str[i]);
            }
            else{

                if(st.size()>0){
                    return false;
                }
            }
        }

        return true;
        
    }
};