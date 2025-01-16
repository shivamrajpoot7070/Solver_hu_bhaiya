class NumArray {
public:
    vector<int>arr;
    int sum=0;
    NumArray(vector<int>& nums) {
        arr=nums;
        for(int i:arr){
            sum+=i;
        }
    }
    
    void update(int index, int val) {
        sum-=arr[index];
        sum+=val;
        arr[index]=val;
    }
    
    int sumRange(int left, int right) {
        int lsum=0;
        int rsum=0;
        for(int i=0;i<left;i++){
            lsum+=arr[i];
        }
        for(int i=right+1;i<arr.size();i++){
            rsum+=arr[i];
        }
        return sum-lsum-rsum;
    }
};
/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index, val);
 * int param_2 = obj->sumRange(left, right);
 */