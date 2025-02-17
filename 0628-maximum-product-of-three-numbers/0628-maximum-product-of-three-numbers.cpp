class Solution {
public:
    int maximumProduct(vector<int>& arr) {

        sort(arr.begin(),arr.end());

        int fst=1;
        int last=1;
        int n=arr.size();

        int neg=0;

        for(int i=0;i<arr.size();i++){
            if(arr[i]<0){
                neg++;
            }
        }


        if(neg<=1){
            int pro=1;
            int i=n-1;
            int x=3;
            while(x--){
                pro=pro*arr[i];
                i--;
            }
            return pro;
        }

        else{

            int aagpic=1;
            int piche=1;
            aagpic=aagpic*(arr[0]*arr[1]*arr[n-1]);
            piche=piche*(arr[n-1]*arr[n-2]*arr[n-3]);

            return max(aagpic,piche);

        }


        
    }
};