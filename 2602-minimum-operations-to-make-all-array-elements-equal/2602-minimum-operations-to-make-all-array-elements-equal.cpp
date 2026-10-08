class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {

        sort(nums.begin(), nums.end());

        int n = nums.size();

        vector<long long> prefix(n);
        prefix[0] = nums[0];

        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i-1] + nums[i];
        }

        vector<long long> ans;

        for (int x : queries) {

    int pos = lower_bound(nums.begin(), nums.end(), x) - nums.begin();

    // Left side: elements smaller than x
    long long leftCost = 0;

    if (pos > 0) {
        long long leftSum = prefix[pos - 1];

        leftCost = (long long)x * pos - leftSum;
    }

    // Right side: elements greater or equal to x
    long long rightSum = prefix[n - 1];

    if (pos > 0) {
        rightSum -= prefix[pos - 1];
    }

    long long rightCount = n - pos;

    long long rightCost = rightSum - (long long)x * rightCount;

    ans.push_back(leftCost + rightCost);
}

        return ans;
    }
};