class Solution {
public:


    void solve(int i,int n,vector<int>&ans){

        if(i>n){
            return;
        }

        ans.push_back(i);

        for(int ap=0;ap<=9;ap++){

            int newnum;
            newnum=i*10+ap;

            if(newnum>n){
                return;
            }

            solve(newnum,n,ans);
        }

    }


    vector<int> lexicalOrder(int n) {

        vector<int>ans;

        for(int i=1;i<=9;i++){

            solve(i,n,ans);

        }

        return ans;
        
    }
};