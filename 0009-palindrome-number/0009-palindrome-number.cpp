class Solution {
public:
    bool isPalindrome(int x) {

      if(x<0){
        return false;
      }

      int num=x;

      long long rev=0;


      while(num>0){

        int i=num%10;

        rev=rev*10+i;

        num=num/10;
      }

      if(rev==x){
        return true;
      }

      return false;
        
    }
};