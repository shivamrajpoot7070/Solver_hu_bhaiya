class Solution {
public:
    string addSpaces(string s, vector<int>& arr) {

        int ind=0;

        string str="";

        for(int i=0;i<s.length();i++){

            if(ind<arr.size()&& arr[ind]==i){

                str+=" ";
                ind++;
            }

            str+=s[i];

        }

        return str;
        
    }
};