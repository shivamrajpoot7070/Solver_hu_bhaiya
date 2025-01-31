class Solution {
public:
    string replaceWords(vector<string>& dict, string sent) {

        string ans="";
        string str="";

        for(int i=0;i<=sent.length();i++){

            if(sent[i]==' ' || i==sent.length()){

                bool flag=true;

                string x="";

                for(int j=0;j<dict.size();j++){

                    flag=true;

                    string temp=dict[j];

                    if(temp.length()>str.length()){
                        continue;
                    }

                    for(int k=0;k<temp.length();k++){
                        if(temp[k]!=str[k]){
                            flag=false;
                            break;
                        }
                    }

                    if(flag){
                        if(x.length()==0 || dict[j].length()<x.length()){
                            x=dict[j];
                        }
                    }
                }


                if (!x.empty()) {  // Fix 4: Check if x is not empty
                    ans += x;
                } else {
                    ans += str;
                }
                ans += ' ';
                str = "";
            }
            else{
                str+=sent[i];
            }
        }

        ans.pop_back();


        return ans;


        
    }
};