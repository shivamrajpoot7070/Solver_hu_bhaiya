class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>pq;  // min heap
    int afterk;
    KthLargest(int k, vector<int>& nums) {

        afterk=k;

        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);


            if(pq.size()>afterk){   //kth chahiye isky usse k se kam wla uda do 
                pq.pop();
            }
        }
        
    }
    
    int add(int val) {

        pq.push(val);

        if(pq.size()>afterk){
            pq.pop();
        }

        return pq.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */