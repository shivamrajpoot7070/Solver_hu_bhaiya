class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());

        int i=0;
        int j=0;
        int k=arr.size()-1;

       vector<vector<int>>ans;

        while(i<arr.size()-2){
            while(i!=0 && i<arr.size()-2 && arr[i]==arr[i-1]) i++;

             int j=i+1;

             int k=arr.size()-1;

              while(j<k){

              int sum=arr[i]+arr[j]+arr[k];

                if(sum>0){
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    vector<int>temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);

                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && arr[j]==arr[j-1]) j++;
                    while(j<k && arr[k]==arr[k+1]) k--;
                }
            }
            ///while(i+1<arr.size()-2 && arr[i]==arr[i+1]) i++;
            i++;
        }

        

        // for(auto it:st){
        //     ans.push_back(it);
        // }

        return ans;
    }
};