class Solution {
public:
    int longestContinuousSubstring(string str) {
        
        int ans=1;

        int i=0;
        int j=1;

        while(i<str.length() && j<str.length()){

            if(str[j]==++str[j-1]){
                ans=max(ans,j-i+1);
            }
            
            else{
                while(i<j){
                    i++;
                }
            }
            j++;
        }

        return ans;
    }
};