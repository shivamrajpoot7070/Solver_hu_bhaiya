class Solution {
public:

  const long long mod=12345;

    vector<vector<int>> constructProductMatrix(vector<vector<int>>& arr) {

        long long pro=1;
        int row=arr.size();
        int col=arr[0].size();

        // 
        // vector<vector<int>>temp(row,vector<int>(col));

        vector<long long>temp(row*col);

        int x=0;

        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[i].size();j++){
                temp[x]=arr[i][j];
                x++;
            }
        } 

        int n=temp.size(); 

        vector<long long>left(n);
        vector<long long>right(n);

        left[0]=1;
        right[n-1]=1;

        for(int i=1;i<temp.size();i++){
            left[i]=(left[i-1]*temp[i-1])%mod;
        }

        for(int i=n-2;i>=0;i--){
            right[i]=(right[i+1]*temp[i+1])%mod;
        }

        vector<long long>ans(n);

        for(int i=0;i<n;i++){
            ans[i]=left[i]*right[i];
        }

    int ind=0;

        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[i].size();j++){

            if(ind<n){
                arr[i][j]=ans[ind]%mod;
                ind++;
            }
                
            }
        }

        return arr;
    }
};