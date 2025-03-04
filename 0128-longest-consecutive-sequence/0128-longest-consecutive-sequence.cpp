class Solution {
public:
    int longestConsecutive(vector<int>&arr) {
        
        set<int>st;

        for(int i=0;i<arr.size();i++){

            st.insert(arr[i]);
        }

        int maxi=0;
        int prev=INT_MIN;
        int len=1;

        for(int ele:st){


            if(prev==INT_MIN){
                prev=ele;
            }


            else{

                if(ele-prev==1){
                    len++;
                    maxi=max(maxi,len);
                }
                else{
                    len=1;
                }
                prev=ele;
            }
        }

        return maxi;

    }
};