class Solution {
public:
    string reverseVowels(string str) {

        string temp="";


        for(int i=str.length()-1;i>=0;i--){

            if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){

            temp+=str[i];
            str[i]='#';
        }
        }

        int x=0;

        for(int i=0;i<str.length();i++){

            if(str[i]=='#'){
                str[i]=temp[x];
                x++;
            }
        }

        return str;
        
    }
};