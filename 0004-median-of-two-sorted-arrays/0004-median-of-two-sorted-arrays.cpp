class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {

        double firstval=-1;
        double secondval=-1;

        int n=arr1.size()+arr2.size();

        int firstidx=(n/2)-1;
        int secondidx=n/2;

        int tempidx=-1;

        int i=0;
        int j=0;


        while(i<arr1.size() && j<arr2.size()){

            if(arr1[i]<=arr2[j]){
                tempidx++;
                if(tempidx==firstidx){
                    firstval=arr1[i];
                }
                if(tempidx==secondidx){
                    secondval=arr1[i];
                }
                i++;
            }
            else{
                tempidx++;

                if(tempidx==firstidx){
                    firstval=arr2[j];
                }
                if(tempidx==secondidx){
                    secondval=arr2[j];
                }
                j++;
            }

            if(firstval!=-1 && secondval!=-1){
                break;
            }
        }

        while(i<arr1.size()){
            tempidx++;
            if(tempidx==firstidx){
                    firstval=arr1[i];
            }
            if(tempidx==secondidx){
                    secondval=arr1[i];
            }
            i++;
            if(firstval!=-1 && secondval!=-1){
                break;
            }
        }

        while(j<arr2.size()){
             tempidx++;
                if(tempidx==firstidx){
                    firstval=arr2[j];
                }
                if(tempidx==secondidx){
                    secondval=arr2[j];
                }
                j++;
                if(firstval!=-1 && secondval!=-1){
                break;
                }
        }


        if(n%2!=0){
            return  secondval;
        }
        else{

            double sum=firstval+secondval;
            return sum/2;
        }

    }
};