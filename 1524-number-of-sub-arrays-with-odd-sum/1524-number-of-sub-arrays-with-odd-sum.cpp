class Solution {
public:
        const int mod = 1e9+7;
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        int odd = 0, even = 0;  // Count of odd and even prefix sums
        long long ans = 0;
        long long sum = 0;  // Running sum

        for(int i = 0; i < n; i++) {
            sum += arr[i];

            if(sum % 2 != 0) { 
                // If running sum is odd
                ans += (even + 1);  // Count all previous even prefix sums + itself bcoz even+odd=odd
                odd++;
            } 
            else { 
                // If running sum is even
                ans += odd;  // Count all previous odd prefix sums bcoz even+odd=odd
                even++;
            }
        }
        
        return ans % mod;
    
    }
};