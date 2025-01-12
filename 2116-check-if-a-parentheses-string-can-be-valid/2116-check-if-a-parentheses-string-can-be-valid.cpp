class Solution {
public:
    bool canBeValid(string str, string lock) {

        stack<pair<char,int>>st;

        // if(lock.length()==2){

        //     if(lock[0]=='0' && lock[1]=='0'){
        //         return true;
        //     }
        // }

        if(str.size()%2!=0){
            return false;
        }


        for(int i=0;i<str.length();i++){

            if(str[i]=='('){
                st.push({'(',i});
            }
            else{


                if(str[i]==')'){

                    if(st.size()>0){
                        st.pop();
                    }

                    else{
                        if(lock[i]=='0'){
                            st.push({'(',i});
                        }
                        else{
                            return false;
                        }
                    }
                }


            }
        }

        if(st.size()%2==0){

            while(st.size()>0){
                int x=st.top().second;
                if(lock[x]=='0'){
                    return true;
                }
                else{
                    return false;
                }
            }
            
        }

        if(st.size()==0){
            return true;
        }
        return false;
    }
};