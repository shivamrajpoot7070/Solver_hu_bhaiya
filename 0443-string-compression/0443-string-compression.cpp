class Solution {
public:
    int compress(vector<char>& arr) {

        // int ct=1;

        // int sum=0;

        // int ind=0;


        // for(int i=0;i<arr.size()-1;i++){

        //     if(arr[i]==arr[i+1]){
        //         ct++;
        //     }

        //     else{
        //         if(ct==1){
        //             arr[ind]=arr[i];
        //         }

        //         else{
        //             int t=ct;
        //             int n1=0;
        //             arr[ind]=arr[i];

        //             while(t>0){
        //                 int x=t%10;
        //                 n1=n1*10+x;

        //                 t=t/10;
        //             }

        //             while(n1>0){

        //                 int x=n1%10;

        //                 arr[ind]=char(x);
        //                 ind++;

        //                 n1=n1/10;

        //             }

        //             ct=1;
        //         }

                
        //     }
        // }


        // if(ct>1){

        //             int t=ct;
        //             int n1=0;
        //             arr[ind]=arr[arr.size()-1];

        //             while(t>0){
        //                 int x=t%10;
        //                 n1=n1*10+x;

        //                 t=t/10;
        //             }

        //             while(n1>0){

        //                 int x=n1%10;

        //                 arr[ind]=char(x);
        //                 ind++;

        //                 n1=n1/10;

        //             }

        // }

        // return arr.size();


        int ct=1;

        string ans="";

        if(arr.size()==1){
            return arr.size();
        }

        for(int i=0;i<arr.size()-1;i++){

            if(arr[i]==arr[i+1]){
                ct++;
            }

            else{

                if(ct==1){
                    ans+=arr[i];
                }

                else{
                    ans+=arr[i];
                    ans+=to_string(ct);
                    
                }

                ct=1;

            }
        }

        if(ct>1){

            ans+=arr[arr.size()-1];
            ans+=to_string(ct);
        }

        else{
            ans+=arr[arr.size()-1];
        }

        for(int i=0;i<ans.length();i++){

            arr[i]=ans[i];
        }


        return ans.length();
        
    }
};