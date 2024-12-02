class Solution {
public:
    int isPrefixOfWord(string str, string word) {


        vector<int>hash(26,0);

        for(int i=0;i<word.length();i++){
            hash[word[i]-'a']++;
        }

        string temp;

        int ct=0;
        

        for(int i=0;i<=str.length();i++){


            if(str[i]==' ' || i==str.length()){

                ct++;
                string match="";
                int j=0;
                int k=0;

                while(j<temp.length() && k<temp.length()){

                    if(j-k+1==word.length()){

                        match+=temp[j];

                        if(match==word){
                            return ct;
                        }
                        k++;
                    }
                    match+=temp[j];
                    j++;

                }

                temp="";
            }

            else{
                temp+=str[i];
            }
        }


        return -1;
    }
};