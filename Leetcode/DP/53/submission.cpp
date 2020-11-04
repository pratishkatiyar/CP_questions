class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i, n = nums.size();
    long long prevMax = INT_MIN, curMax;
    long long ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        curMax = nums[i];
        curMax = max(curMax, nums[i] + prevMax);
        ans = max(ans, curMax);
        prevMax = curMax;
    }
    return ans;
    }
};
