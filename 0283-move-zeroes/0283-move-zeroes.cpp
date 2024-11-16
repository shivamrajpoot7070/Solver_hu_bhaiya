class Solution {
public:
    void moveZeroes(vector<int>&arr){
        
        int n=arr.size();
        
        int i=0;
        int j=n-1;
        
        while(i<j && i<n){
            
            if(arr[i]==0){
                
                while(j>i && arr[j]==0){
                    j--;
                }
                
                for(int k=i;k<j;k++){
                    arr[k]=arr[k+1];
                }
                
                arr[j]=0;
            }
            
            else{
            
            i++;
        }
      }
    
        
    }
};