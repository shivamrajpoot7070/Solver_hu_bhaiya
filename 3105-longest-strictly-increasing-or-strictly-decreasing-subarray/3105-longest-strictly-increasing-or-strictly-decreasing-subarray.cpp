class Solution {
public:
    int longestMonotonicSubarray(vector<int>&arr) {

        int mdec=1;
        int minc=1;
        int last=-1;
        int ind=0;

        for(int i=0;i<arr.size();i++){

            if(arr[i]>last){
                last=arr[i];
                int len=(i-ind)+1;
                mdec=max(mdec,len);
            }
            else{
                last=arr[i];
                ind=i;
            }
        } 

        last=INT_MAX;
        ind=0;

        for(int i=0;i<arr.size();i++){

            if(arr[i]<last){
                last=arr[i];
                int len=(i-ind)+1;
                minc=max(minc,len);
            }
            else{
                last=arr[i];
                ind=i;
            }
        }

        return max(minc,mdec);
    }
};