class Solution {
public:
    int getKth(int low, int high, int k) {


        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;


        for(int i=low;i<=high;i++){

            int num=i;
            int pow=0;

            while(num!=1){

                if(num%2==0){
                    num=num/2;
                }

                else{
                    num=num*3+1;
                }

                pow++;
            }

            pq.push({pow,i});
        }


        k=k-1;

        while(k--){
            pq.pop();
        }

        return pq.top().second;
        
    }
};