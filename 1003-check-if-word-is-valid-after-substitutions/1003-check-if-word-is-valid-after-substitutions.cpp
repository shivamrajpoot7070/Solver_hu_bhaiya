class Solution {
public:
    bool isValid(string str) {

        stack<char>as;
        stack<char>bs;


        for(int i=0;i<str.length();i++){


            if(str[i]=='a'){
                as.push(str[i]);
            }

            else if(str[i]=='b'){

                if(as.size()>0){
                    as.pop();
                    bs.push(str[i]);
                }
                else{
                    return false;
                }
            }

            else{
                if(bs.size()>0){
                    bs.pop();
                }
                else{
                    return false;
                }
            }
        }

        return true;
        
    }
};