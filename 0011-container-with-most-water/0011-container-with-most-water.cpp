class Solution {
public:
    int maxArea(vector<int>& arr) {

       int maxi=INT32_MIN;
    int n=arr.size();

    int sum=0;

    int j=n-1;

    int i=0;


    while(i<j){
        
            int d=min(arr[i],arr[j])*(j-i);
            maxi=max(d,maxi);

            if(arr[i]>arr[j]) j--;
            else i++;

        }


    return maxi;
    }
};