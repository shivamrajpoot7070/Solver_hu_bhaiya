class Solution {
public:
    bool wordPattern(string pattern, string str) {
        
        map<char,string>pat;
        map<string,char>s;

        vector<string>arr;
        string temp="";

        for(int i=0;i<=str.length();i++){

            if(str[i]==' ' || i==str.length()){
                 arr.push_back(temp);
                 temp="";
            }
            else{
                temp+=str[i];
            }
            
        }

        int x=0;

        if(pattern.length()!=arr.size()){
            return false;
        }

        for(int i=0;i<pattern.length();i++){
            if(pat.find(pattern[i])==pat.end()){

                if(s.find(arr[x])!=s.end()){
                    if(s[arr[x]]!=pattern[i]){
                        return false;
                    }
                }
                pat[pattern[i]]=arr[x];
                s[arr[x]]=pattern[i];
            }

            else{

                string mat=pat[pattern[i]];

                if(mat!=arr[x]){
                    return false;
                }
            }
            x++;
        }

        return true;

        
    }
};