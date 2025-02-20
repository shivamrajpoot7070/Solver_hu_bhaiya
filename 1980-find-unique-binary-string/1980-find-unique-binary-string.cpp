class Solution {
public:
    bool gen(string &str,unordered_map<string,int>&mpp,int i,int n,string &ans){

        if(i==n){
            if(mpp.find(str)==mpp.end()){
                ans=str;
                return true;
            }
            return false;
        }
        
        str.push_back('0');
        if(gen(str,mpp,i+1,n,ans)==true){
            return true;
        }
        str.pop_back();

        str.push_back('1');
        if(gen(str,mpp,i+1,n,ans)==true){
            return true;
        }

        str.pop_back();

        return false;
    }
    string findDifferentBinaryString(vector<string>& arr) {
        
        string x=arr[0];
        int n=x.length();

        unordered_map<string,int>mpp;
         for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
       
        string str="";

        string ans="";

        bool m=gen(str,mpp,0,n,ans);

       
        return ans;
    }
};