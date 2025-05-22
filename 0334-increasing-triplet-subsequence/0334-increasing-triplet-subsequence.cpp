class Solution {
public:
    bool increasingTriplet(vector<int>& arr) {
        int fst=INT_MAX;
        int scnd=INT_MAX;
        int thrd;
        
        
        for(int i=0;i<arr.size();i++){
            thrd=arr[i];
            
            if(thrd<=fst){
                fst=thrd;
            }
            else if(thrd<=scnd){
                scnd=thrd;
            }
            else{
                return true;
            }  
        }
        return false;
        
    }
};