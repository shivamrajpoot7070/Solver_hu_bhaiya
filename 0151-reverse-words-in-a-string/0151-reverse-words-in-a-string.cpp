class Solution {
public:
    string reverseWords(string str) {

        string temp="";
        vector<string>arr;

        for(int i=0;i<str.length();i++){

            if(str[i]==' ' || i==str.length()){

                if(temp.length()>0){
                    arr.push_back(temp);
                    temp="";
                }
            }

            else{

                temp+=str[i];
            }
        }

        if(temp.length()>0){
            arr.push_back(temp);
        }

        reverse(arr.begin(),arr.end());

        string ans="";

        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
            ans+=arr[i];
            ans+=' ';
        }

        ans.pop_back();
        return ans;
        
    }
};