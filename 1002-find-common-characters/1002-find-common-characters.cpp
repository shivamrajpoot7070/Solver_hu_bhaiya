class Solution {
public:
    vector<string> commonChars(vector<string>& arr) {

      vector<int> hash(26, INT_MAX); // Initialize with max possible value
        vector<int> temp(26, 0); // Temporary array for frequency counting

        for (int i = 0; i < arr.size(); ++i) {
            fill(temp.begin(), temp.end(), 0); // Reset temp array to zero
            
            for (char c : arr[i]) {
                temp[c - 'a']++; // Count frequency of each character
            }

            // Update the main hash to keep track of the minimum frequency
            for (int j = 0; j < 26; ++j) {
                hash[j] = min(hash[j], temp[j]);
            }
        }

        vector<string> ans;
        // Collect the result based on the minimum frequencies
        for (int i = 0; i < 26; ++i) {
            while (hash[i] > 0) {
                ans.push_back(string(1, i + 'a'));
                hash[i]--;
            }
        }

        return ans;


        
    }
};