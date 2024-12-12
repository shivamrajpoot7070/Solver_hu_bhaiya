class Solution {
public:

    void gen(int n,int open,int close,vector<string>&ans,string &str){


        if(open+close==2*n){
            ans.push_back(str);
            return;
        }

        if(open<n){

            str.push_back('(');
            gen(n,open+1,close,ans,str);
            str.pop_back(); 
        }

        if(close<open){
            str.push_back(')');
            gen(n,open,close+1,ans,str);
            str.pop_back();
        }

    }

    vector<string> generateParenthesis(int n) {

        int open=0;
        int close=0;
        vector<string>ans;
        string str="";
        gen(n,open,close,ans,str);

        return ans;
        
    }
};