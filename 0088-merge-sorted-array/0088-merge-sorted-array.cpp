class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        if(m==0){
            nums1=nums2;
            return;
        }
        if(n==0){
            return;
        }
        
        int i=0;
        int j=0;

        while(i<m){
            if(nums1[i]>nums2[j]){
                swap(nums1[i],nums2[j]);
            }
            i++;
        }

        while(j<nums2.size()){
            nums1[i]=nums2[j];
            i++;
            j++;
        }
    }
};