class Solution {
public:
    int findMinFibonacciNumbers(int k) {

      vector<int>v;

      v.push_back(1);
      v.push_back(1);

      int a=1;
      int b=1;

      int c;

      while(c<=k){

        c=a+b;

        v.push_back(c);
        a=b;
        b=c;
      }

      int i=v.size()-1;


      int ct=0;

      int sum=0;


      while(i>=0){

        if(v[i]<=k){
          sum+=v[i];
          ct++;
          k=k-v[i];
        }

        if(k==0){
          return ct;
        }

        i--;
      }

      return ct;
        
    }
};