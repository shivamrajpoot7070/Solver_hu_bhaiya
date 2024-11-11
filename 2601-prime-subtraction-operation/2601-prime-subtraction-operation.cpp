class Solution {
public:
 

    int findprime(int num, int prev) {
        for (int i = num - 1; i >= 2; i--) {
            bool isPrime = true;
            // Check if 'i' is prime using trial division up to sqrt(i)
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            // If 'i' is prime and the result of num - i is greater than prev
            if (isPrime && (num - i) > prev) {
                return num - i;
            }
        }
        // If no valid prime found, return the original number
        return num;
    }


    bool primeSubOperation(vector<int>&arr) {

        int prev=0;

        for(int i=0;i<arr.size();i++){

            int ele=findprime(arr[i],prev);
            
            if(ele>prev){
                prev=ele;
            }

            else{
                return false;
            }

            arr[i]=prev;
        }



        for(int i=0;i<arr.size()-1;i++){

            if(arr[i]>=arr[i+1]){
                return false;
            }
        }

        return true;

    }
};