class Solution {
public:
    bool checkValidString(string str) {


        stack<char>st;
        int star=0;

        for(int i=0;i<str.length();i++){

            if(str[i]=='('){
                st.push('(');
            }

            else if(str[i]=='*'){
                star++;
            }

            else{

                if(st.size()>0){
                    st.pop();
                }

                else{

                    if(star>0){
                        star--;
                    }

                    else{
                        return false;
                    }
                }
            }
        }

        return true;


    }
};