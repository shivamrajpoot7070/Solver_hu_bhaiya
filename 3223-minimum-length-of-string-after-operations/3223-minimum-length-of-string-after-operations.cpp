class Solution {
public:
    int minimumLength(string s) {

      string str="";
      int j;
      int k;

      int ct=0;

      bool p=true;

      for(int i=1;i<s.length()-1;i++){

        if(s[i]!='#'){

      bool left=false;
      bool right=false;
      int li=-1;
      int ri=-1;

        for(j=i-1;j>=0;j--){
          if(s[j]==s[i]){
            left=true;
            li=j;
            break;
          }
        }


        for(k=i+1;k<s.length();k++){
          if(s[k]==s[i]){
            right=true;
            ri=k;
            break;
          }
        }

        if(left&&right){
            ct+=2;
            s[li]='#';
            s[ri]='#';
        }

      }
      }

      return s.length()-ct;
        
    }
};