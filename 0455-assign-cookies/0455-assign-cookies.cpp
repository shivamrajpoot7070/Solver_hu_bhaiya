class Solution {
public:
    int findContentChildren(vector<int>&gre, vector<int>& coo) {
       
       sort(gre.begin(),gre.end());

       int ct=0;
       int x=0;

       for(int i=0;i<gre.size();i++){

           while(x<coo.size() && coo[x]<gre[i]){
              x++;
           }

           if(x<coo.size() && coo[x]>=gre[i]){
             ct++;
             x++;
           }
       }

       return ct;

    }
};