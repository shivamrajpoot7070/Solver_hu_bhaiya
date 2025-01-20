class Solution {
public:
    void reverseString(vector<char>& arr) {

        int i=0;
        int j=arr.size()-1;


        while(i<=j){

            swap(arr[i],arr[j]);

            i++;
            j--;
        }
        
    }
};