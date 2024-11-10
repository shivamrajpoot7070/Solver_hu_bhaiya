class Solution {
public:

    int minOperations(int startValue, int target) {
    // Base case: when startValue equals target
    if (startValue >= target) {
        return startValue - target; // Only decrement operations needed
    }

    // Recursive step
    if (target % 2 == 0) {
        // If target is even, try to reach target / 2 recursively
        return 1 + minOperations(startValue, target / 2);
    } 
    else {
        // If target is odd, increment it by 1 to make it even and continue
        return 1 + minOperations(startValue, target + 1);
    }
}


    int brokenCalc(int startValue, int target) {
      int result = minOperations(startValue, target);

      return result;
        
    }
};