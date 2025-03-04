class Solution {
public:

    bool check(int n,int i,int limit){

        if(i>limit || n<0){
            return false;
        }

        if(n==0){
            return true;
        }

        int power=pow(3,i);

        if(power>n){
            return false;
        }

        bool take=check(n-power,i+1,limit);
        bool ntake=check(n,i+1,limit);

        return take || ntake;
    }
    bool checkPowersOfThree(int n) {

        int index=0;
        int limit=n;

        return check(n,index,limit);

    }
};