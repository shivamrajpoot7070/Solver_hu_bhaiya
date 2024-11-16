class Solution {
public:
    vector<int> resultsArray(vector<int>& arr, int k) {

        if (k == 1) {
            return arr;
        }

        

        int i = 0;
        int j = 0;

        int n = arr.size();
        vector<int>ans;
        bool thik = true;
        int maxi = arr[0];
        bool fst=true;

        while (i < n && j < n) {


            if(j-i+1==k){
                thik=true;
                maxi=arr[i];

                for(int k=i+1;k<=j;k++){

                    if(k==0){
                        continue;
                    }
                    else{

                        if(arr[k]-arr[k-1]==1 && arr[k]>maxi){
                            maxi=arr[k];
                        }
                        else{
                            thik=false;
                        }
                    }

                }

                if(thik){
                    ans.push_back(maxi);
                }
                else{
                    ans.push_back(-1);
                }

                i++;

            }


            j++;

           
        }

           
        return ans;
    }
};