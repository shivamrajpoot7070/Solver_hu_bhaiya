class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {


        map<int,int>mpp;
        int i=0;
        int j=0;
        int n=arr.size();

        vector<int>ans;

        while(i<n && j<n){

            mpp[arr[j]]++;

            if(j-i+1==k){

                int val=mpp.rbegin()->first;
                ans.push_back(val);

                mpp[arr[i]]--;

                if(mpp[arr[i]]==0){
                    mpp.erase(arr[i]);
                }
                i++;
            }

            j++;
        }

        return ans;
        
        
    }
};