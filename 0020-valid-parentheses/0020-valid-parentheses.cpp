class Solution {
public:
    bool isValid(string str) {

        stack<char>st;


        for(int i=0;i<str.length();i++){

            if(str[i]=='(' || str[i]=='[' || str[i]=='{'){
                st.push(str[i]);
            }
            else{

                if(st.size()>0){

                    if(str[i]==')' && st.top()!='('){
                        return false;
                    }
                    if(str[i]=='}' && st.top()!='{'){
                        return false;
                    }
                    if(str[i]==']' && st.top()!='['){
                        return false;
                    }
                    else{
                        st.pop();
                    }
                }
                else{
                    return false;
                }
            }
        }

        return !st.size();

        //return true;
        
    }
};