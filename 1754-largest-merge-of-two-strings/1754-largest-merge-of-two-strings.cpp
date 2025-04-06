class Solution {
public:
    string largestMerge(string str1, string str2) {
        
        int i=0;
        int j=0;


        string ans="";


        while(i<str1.length() && j<str2.length()){

            if(str1[i]>str2[j]){
                ans+=str1[i];
                i++;
            }
            else if(str2[j]>str1[i]){
                ans+=str2[j];
                j++;
            }
            else{

                if(str1.substr(i)>str2.substr(j)){
                    ans+=str1[i];
                    i++;
                }
                else{
                    ans+=str2[j];
                    j++;
                }
            }
        }

        while(i<str1.length()){
            ans+=str1[i];
            i++;
        }

         while(j<str2.length()){
            ans+=str2[j];
            j++;
        }

        return ans;

       
    }
};