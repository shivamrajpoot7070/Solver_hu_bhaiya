

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>&arr) {

        int n=arr.size();

        vector<int>ans(n);


        for(int i=0;i<n;i++){


            if(arr[i]==0){
                ans[i]=arr[i];
            }


            else if(arr[i]<0){


                if(abs(arr[i])>i){


                    int ind=i+abs(arr[i]);
                    ind=ind%n;
                    if(i==0){
                        ind=ind+1;
                    }
                    ans[i]=arr[ind];
                }

                else{

                    int ind=i;
                    ind=ind-abs(arr[i]);

                    ind=ind%n;

                    ans[i]=arr[ind];
                }


            }

            else{


                int ind=i+arr[i];
                ind=ind%n;

                ans[i]=arr[ind];


            }

        }

        return ans;
        
    }
};