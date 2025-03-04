class Solution {
public:
    long long calculateScore(string str) {

       unordered_map<char, vector<int>> mpp; // Store last seen index of //a char
        long long ans = 0;

        for (int i = 0; i < str.length(); i++) {
            char mirror = 'z' - (str[i] - 'a'); // Calculate mirror character

            if (mpp.find(mirror) != mpp.end() && mpp[mirror].size()>0) {
                ans += i - mpp[mirror].back();  // Add the difference to score
                mpp[mirror].pop_back();  // Remove the matched pair
            } 
            else {
                mpp[str[i]].push_back(i);  // Store the current index of the character
            }
        }
        return ans;
    }
};