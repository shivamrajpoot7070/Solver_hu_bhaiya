class Solution {
public:
    int smallestNumber(int n) {

        int x = 0; // Start with 0
    while (x < n) {
        x = (x << 1) | 1; // Shift left by 1 and set the least significant bit
    }
    return x;
        
    }
};