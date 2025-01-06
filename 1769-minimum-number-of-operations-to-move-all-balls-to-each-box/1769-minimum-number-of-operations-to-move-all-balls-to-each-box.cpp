class Solution {
public:
    vector<int> minOperations(string arr) {


        int n=arr.length();
        vector<int>ans(n);

        for(int i=0;i<arr.size();i++){

            int step=0;

            for(int j=i+1;j<n;j++){

                if(arr[j]=='1'){
                    step+=(j-i);
                }
            }

            for(int j=i-1;j>=0;j--){

                if(arr[j]=='1'){
                    step+=i-j;
                }
            }


            ans[i]=step;

        }


        return ans;
        
    }
};