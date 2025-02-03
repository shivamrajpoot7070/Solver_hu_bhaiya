class Solution {
public:
  typedef pair<int,int>p;
    vector<int> frequencySort(vector<int>& arr) {


      priority_queue<p,vector<p>,greater<p>>pq;

      unordered_map<int,int>mpp;

      for(int i=0;i<arr.size();i++){

        int num=arr[i]*(-1);
        mpp[num]++;
      }


      for(auto it:mpp){

        int freq=it.second;
        int num=it.first;
        pq.push({freq,num});

      }

      vector<int>ans;

      while(pq.size()>0){

        int num=pq.top().second;
        int freq=pq.top().first;

        for(int i=1;i<=freq;i++){
          int x=num*(-1);
          ans.push_back(x);
        }

        pq.pop();
      }

      return ans;


     
    }
};