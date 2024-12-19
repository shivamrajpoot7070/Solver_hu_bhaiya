class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {

        int ct=0;
        int i=0;
        int m=arr.size();

        while(i<arr.size()){

            if(i-arr[i]==0){
                ct++;
                i++;
            }
            else{

                int k=i;
                int ind=i;
                int maxi=arr[i];
                vector<int>v;

                while(k<m && k!=arr[i]){
                    k++;
                }

                for(int l=i;l<=k;l++){
                    v.push_back(arr[l]);
                }

                sort(v.begin(),v.end());
                for(int l=0;l<v.size();l++){
                    if(v[l]!=ind+l){
                        return 1;
                    }
                }
                ct++;
                i=k+1;
            }
        }

        return ct;
        
    }
};