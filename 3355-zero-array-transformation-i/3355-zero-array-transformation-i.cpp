class Solution
{
public:
    bool isZeroArray(vector<int> &nums, vector<vector<int> > &queries)
    {
        int n = nums.size();
        vector<int> sweep_line(n + 1, 0);

        for (auto it : queries) // q
        {
            sweep_line[it[0]] += 1;
            if (it[1] + 1 < n)
            {
                sweep_line[it[1] + 1] -= 1;
            }
        }

        for (int i = 1; i <= n; i++) // n
            sweep_line[i] += sweep_line[i - 1];
        
        int flag = 1;
        for (int i = 0; i < n; ++i) // n
        {
            if (sweep_line[i] < nums[i])
            {
                flag = 0;
            }
        }
        return flag == 1 ? true : false;
    }
};

// tc = O(q+n)
// sc = O(q+n)