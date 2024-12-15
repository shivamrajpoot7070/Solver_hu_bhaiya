class Solution {
public:
    string addStrings(string num1, string num2) {


        

        int n=num1.length();
        int m=num2.length();

        int i=n-1;
        int j=m-1;

        int carry=0;

        string ans="";

        while(i>=0 || j>=0){
            int a=0;
            int b=0;

            if(i>=0){
                a=num1[i]-'0';
            }

            if(j>=0){
                b=num2[j]-'0';
            }

            int sum=a+b+carry;
            int num=sum%10;
            ans+=num + '0';
            //ans+=c;
            carry=sum/10;
            i--;
            j--;
        }

        if(carry>0){
            ans.push_back(carry+'0');
        }

        reverse(ans.begin(),ans.end());

        return ans;
        
    }
};