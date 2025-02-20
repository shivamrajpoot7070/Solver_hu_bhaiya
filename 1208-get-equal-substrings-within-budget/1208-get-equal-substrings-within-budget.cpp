class Solution {
public:
    int equalSubstring(string str, string arr, int cost) {

        int maxi=0;

        int i=0;
        int j=0;

        int sum=0;

        while(i<str.length() && j<arr.length()){


            sum+=abs(str[j]-arr[j]);

            if(sum<=cost){
                maxi=max(maxi,j-i+1);
            }

            else{

                while(sum>cost){
                    sum-=abs(str[i]-arr[i]);
                    i++;
                }

                maxi=max(maxi,j-i+1);
            }

        j++;
        }

        return maxi;
    }
};