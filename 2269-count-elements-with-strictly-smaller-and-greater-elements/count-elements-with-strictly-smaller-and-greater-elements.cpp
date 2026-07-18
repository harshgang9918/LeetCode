class Solution {
public:
    int countElements(vector<int>& nums) {

        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        int cnt = 0;

        for (int x : nums) {
            if (x > mini && x < maxi)
                cnt++;
        }

        return cnt;
    }
};