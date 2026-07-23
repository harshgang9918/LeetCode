class Solution
{
public:
    int maxSubarraySum(vector<int> &arr, int k)
    {
        int sliding_sum = 0;
        int maxsum = INT_MIN;

        for (int i = 0; i < k; i++)
        {
            sliding_sum += arr[i];
        }

        maxsum = sliding_sum;

        for (int i = k; i < arr.size(); i++)
        {
            sliding_sum = sliding_sum - arr[i - k] + arr[i];
            maxsum = max(sliding_sum, maxsum);
        }

        return maxsum;
    }
};