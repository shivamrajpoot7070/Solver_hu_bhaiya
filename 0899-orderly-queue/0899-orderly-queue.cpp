class Solution {
public:
    string orderlyQueue(string str, int k) {
        
        if(k>1){
            sort(str.begin(),str.end());
            return str;
        }


        string best=str;

        // aage se phle 1 char uthao fir 2 fir 3 or last me append kr do
        // or suru me jo uthne ke alawa bcha wha se leke end tk or isme jod do

        // str.substr(i)  // i se leke end tk


        for(int i=1;i<=str.length()-1;i++){

            string temp=str.substr(i)+str.substr(0,i);

            best=min(best,temp);
        }

        return best;
    }
};