class Solution {
public:
    bool check(int n,int i,int limit){

        if(i>limit){
            return false;
        }

        long long power=pow(3,i);

        if(power==n){
            return true;
        }
        else if(power>n){
            return false;
        }

        bool take=check(n,i+1,limit);
        return take;
    }
    bool isPowerOfThree(int n) {
        int i=0;
        int limit=n;
        return check(n,i,limit);
    }
};