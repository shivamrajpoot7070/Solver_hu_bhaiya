class Solution {
public:

    typedef pair<double,pair<int,int>>p;
    double maxAverageRatio(vector<vector<int>>& arr, int n) {


        priority_queue<p> pq;

        for (auto& c : arr) {
            int pass = c[0], total = c[1];
            double gain = (double)(pass + 1) / (total + 1) - (double)pass / total;
            pq.push({gain, {pass, total}});
        }

        while (n--) {
            auto top = pq.top();
            pq.pop();
            
            int pass = top.second.first;
            int total = top.second.second;
            
            pass += 1;
            total += 1;
            
            double gain = (double)(pass + 1) / (total + 1) - (double)pass / total;
            pq.push({gain, {pass, total}});
        }

       
        double sum = 0.0;
        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();
            int pass = top.second.first;
            int total = top.second.second;
            sum += (double)pass / total;
        }
        return sum / arr.size();

    }
};