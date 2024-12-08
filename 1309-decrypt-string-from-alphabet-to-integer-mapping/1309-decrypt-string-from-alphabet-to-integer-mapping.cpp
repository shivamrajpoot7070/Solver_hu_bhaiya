class Solution {
public:
    string freqAlphabets(string str) { 

        unordered_map<int,char>mpp;

        char ch='a';

        for(int i=1;i<=26;i++){

            mpp[i]=ch;

            ch++;
        }

        string ans="";

        int i=str.length()-1;

        while(i>=0){

            if(str[i]=='#'){
                string temp="";

                temp+=str[i-2];
                temp+=str[i-1];
                int ind=stoi(temp);
                ans+=mpp[ind];
                i=i-3;
            }
            else{
                ans+=mpp[str[i]-'0'];
                i--;
            }

        }

        reverse(ans.begin(),ans.end());

        return ans;

       

    }
};