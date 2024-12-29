class Solution {
public:

    bool bangya(vector<int>& arr, int cars,long long time){

        long long car=0;

        for(int i=0;i<arr.size();i++){

            long long val=(time/arr[i]);

            car+=sqrt(val);

        }

        if(car>=cars){

            return true;

        }

        return false;


    }

    long long repairCars(vector<int>& arr, int cars) {

       long long low = 0;
        long long high = static_cast<long long>(*max_element(arr.begin(),arr.end())) * cars * cars;
        long long result = high;

        
        
        while(low<=high){

            long long mid=(low+high)/2;

            if(bangya(arr,cars,mid)){
                result=mid;
                high=mid-1;
            }

            else{

                low=mid+1;

            }

        }

        return result;


     
    }
};