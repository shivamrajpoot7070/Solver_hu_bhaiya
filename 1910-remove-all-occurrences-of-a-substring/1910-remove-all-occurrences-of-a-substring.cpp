class Solution {
public:
    string removeOccurrences(string str, string part) {

        char last=part.back();
        int m=part.length()-1;
        string ans="";

        for(int i=0;i<str.length();i++){

            bool match=true;

            if(str[i]==last && ans.length()>=m){

                int x=ans.length()-1;

                

                for(int j=m-1;j>=0;j--){

                    if(part[j]!=ans[x]){
                        match=false;
                       
                    }
                    x--;
                }

                if(match){
                    for(int j=m-1;j>=0;j--){
                        ans.pop_back();
                    } 
                }
                else{
                    ans+=str[i];
                }
                
            }

            else{
                ans+=str[i];
            }

        }

        return ans;
        
    }
};